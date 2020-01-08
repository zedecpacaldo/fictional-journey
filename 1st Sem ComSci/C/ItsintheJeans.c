#include <stdio.h>

void main(){
    char dna[100], corrupt[100], fix[100], new[100];
    int flagA = 0, flagB = 0, flagC = 0, flag2 = 0;

    scanf("%s %s %s", &dna, &corrupt, &fix);
    for(int i = 0; dna[i] != '\0'; i++){
        if(dna[i] != 'C' && dna[i] != 'A' && dna[i] != 'G' && dna[i] != 'T'){
            flagA++;
        }
    }

    for(int i = 0; corrupt[i] != '\0'; i++){
        if(corrupt[i] != 'C' && corrupt[i] != 'A' && corrupt[i] != 'G' && corrupt[i] != 'T'){
            flagB++;
        }
    }

    for(int i = 0; fix[i] != '\0'; i++){
        if(fix[i] != 'C' && fix[i] != 'A' && fix[i] != 'G' && fix[i] != 'T'){
            flagC++;
        }
    }

    if(flagA > 0 || flagB > 0 || flagC > 0){
        printf("%s", dna);
        flag2 = 1;
    }

    int h, k, same;

    if(flag2 == 0){
        for(int i = 0; dna[i] != '\0'; i++){
            new[i] = dna[i];
        }

        for(int i = 0; new[i] != '\0'; i++){
            if(new[i] == corrupt[0]){
                h = i;
                k = i;
                same = 1;
                for(int j = 0; corrupt[j] != '\0'; j++){
                    if(corrupt[j] != new[h]){
                        same = 0;
                    }
                    h++;
                }

                if(same == 1){
                    for(int l = 0; fix[l] != '\0'; l++){
                        new[k] = fix[l];
                        k++;
                    }
                }
            }
        }
    printf("%s", new);
    }  
}