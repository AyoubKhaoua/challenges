#include <stdio.h>
int main (){
    int nbr,note;
    printf("donner  un nombre entre supirieur a 0 at infirieur a 100 : ");
    scanf("%d",&nbr);
    note=nbr/10;
    switch(nbr){
        case 9:
                    printf("ANote littérale : A");
        case 8:
                    printf("ANote littérale : B"); 
        case 7:
                    printf("ANote littérale : C"); 
        case 6:
                    printf("ANote littérale : D");
        case 5:
                    printf("ANote littérale : F");            
                                                      
        


    }
    return 0;
}