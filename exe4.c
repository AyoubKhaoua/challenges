#include <stdio.h>

int main (){
    int montant,total;
  
   printf("entrer un montant: ");
   scanf("%d",&montant);
   total=(montant *0.05)+montant;
   printf("%d",total);
    return 0;
}