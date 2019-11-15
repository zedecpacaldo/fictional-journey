#include <stdio.h>
	#include <time.h>
	#include <stdlib.h>

void main() {
    srand(time(NULL));
    int list1[3], list2[3], draw1[3], draw2[3];
    int present, k;

    list1[0] = (rand() % 42) + 1;
    list1[1] = list1[0];
    while(list1[1] == list1[0]){
        list1[1] = (rand() % 42) + 1;
    }
    list1[2] = list1[1];
    while(list1[2] == list1[1] || list1[2] == list1[0]){
        list1[2] = (rand() % 42) + 1;
    }
   
    list2[0] = (rand() % 42) + 1;
    list2[1] = list2[0];
    while(list2[1] == list2[0]){
        list2[1] = (rand() % 42) + 1;
    }
    list2[2] = list2[1];
    while(list2[2] == list2[1] || list2[2] == list2[0]){
        list2[2] = (rand() % 42) + 1;
    }

    int count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(list1[i] == list2[j]){
                count++;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%d %d\n", list1[i], list2[i]);
    }

    printf("%d", count);
}
