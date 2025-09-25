#include <stdio.h>
int main (){
    int nbr,div,mod,res;
   
    
    printf("donner un nombre deux chiffre :");
    scanf("%d",&nbr);
    mod=nbr%10;
    div=nbr/10;
    res=(mod*10)+div;
    printf("le nombre inverse est:%d",res);


 
    return 0;
}