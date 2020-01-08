#include <stdio.h>

void main(){
    int month, day, state = 0;

    scanf("%d %d", &month, &day);

    
    if(state == 0){
        if(month == 1 || month == 12){
            if(month == 1){
                if(day <= 19){
                    printf("Capricorn");
                    state = 1;
                    
                } else {
                    printf("Aquarius");
                    state = 1;
                }
            } else {
                if(day >= 22){
                    printf("Capricorn");
                    state = 1;
                } else {
                    printf("Sagittarius");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 1 || month == 2){
            if(month == 1){
                if(day <= 19){
                    printf("Capricorn");
                    state = 1;
                    
                } else {
                    printf("Aquarius");
                    state = 1;
                }
            } else {
                if(day <= 18){
                    printf("Aquarius");
                    state = 1;
                } else {
                    printf("Pisces");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 2 || month == 3){
            if(month == 2){
                if(day <= 18){
                    printf("Aquarius");
                    state = 1;
                    
                } else {
                    printf("Pisces");
                    state = 1;
                }
            } else {
                if(day <= 20){
                    printf("Pisces");
                    state = 1;
                } else {
                    printf("Aries");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 3 || month == 4){
            if(month == 3){
                if(day <= 20){
                    printf("Pisces");
                    state = 1;
                    
                } else {
                    printf("Aries");
                    state = 1;
                }
            } else {
                if(day <= 19){
                    printf("Aries");
                    state = 1;
                } else {
                    printf("Taurus");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 4 || month == 5){
            if(month == 4){
                if(day <= 19){
                    printf("Aries");
                    state = 1;
                    
                } else {
                    printf("Taurus");
                    state = 1;
                }
            } else {
                if(day <= 20){
                    printf("Taurus");
                    state = 1;
                } else {
                    printf("Gemini");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 5 || month == 6){
            if(month == 5){
                if(day <= 20){
                    printf("Taurus");
                    state = 1;
                    
                } else {
                    printf("Gemini");
                    state = 1;
                }
            } else {
                if(day <= 20){
                    printf("Gemini");
                    state = 1;
                } else {
                    printf("Cancer");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 6 || month == 7){
            if(month == 6){
                if(day <= 20){
                    printf("Gemini");
                    state = 1;
                    
                } else {
                    printf("Cancer");
                    state = 1;
                }
            } else {
                if(day <= 22){
                    printf("Cancer");
                    state = 1;
                } else {
                    printf("Leo");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 7 || month == 8){
            if(month == 7){
                if(day <= 22){
                    printf("Cancer");
                    state = 1;
                    
                } else {
                    printf("Leo");
                    state = 1;
                }
            } else {
                if(day <= 22){
                    printf("Leo");
                    state = 1;
                } else {
                    printf("Virgo");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 8 || month == 9){
            if(month == 8){
                if(day <= 22){
                    printf("Leo");
                    state = 1;
                    
                } else {
                    printf("Virgo");
                    state = 1;
                }
            } else {
                if(day <= 22){
                    printf("Virgo");
                    state = 1;
                } else {
                    printf("Libra");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 9 || month == 10){
            if(month == 9){
                if(day <= 22){
                    printf("Virgo");
                    state = 1;
                    
                } else {
                    printf("Libra");
                    state = 1;
                }
            } else {
                if(day <= 22){
                    printf("Libra");
                    state = 1;
                } else {
                    printf("Scorpio");
                    state = 1;
                }
            }
        }
    }

    if(state == 0){
        if(month == 10 || month == 11){
            if(month == 12){
                if(day <= 20){
                    printf("Libra");
                    state = 1;
                    
                } else {
                    printf("Scorpio");
                    state = 1;
                }
            } else {
                if(day <= 21){
                    printf("Scorpio");
                    state = 1;
                } else {
                    printf("Sagittarius");
                    state = 1;
                }
            }
        }
    }
    
    if(state == 0){
        if(month == 11 || month == 12){
            if(month == 11){
                if(day <= 21){
                    printf("Scorpio");
                    state = 1;
                    
                } else {
                    printf("Sagittarius");
                    state = 1;
                }
            } else {
                if(day <= 21){
                    printf("Sagittarius");
                    state = 1;
                } else {
                    printf("Capricorn");
                    state = 1;
                }
            }
        }
    }
}