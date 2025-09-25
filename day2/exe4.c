#include <stdio.h>
int main (){
    int day1,month1,year1,day2,month2,year2,anne1,anne2;

    printf("enter first date :");
    scanf("%d %d %d",&day1,&month1,&year1);
    printf("enter the seconde date :");
    scanf("%d %d %d",&day2,&month2,&year2);
    anne1=360*year1+30*month1+day1;
    anne2=360*year2+30*month2+day2;
    if(anne1>anne2){
        printf("la annee ancien entre les deux esst:%d,%d,%d :",day2,month2,year2);
    }else{
         printf("la annee ancien entre les deux esst:%d,%d,%d :",day1,month1,year1);
    }
    
    
    
 
    return 0;
}