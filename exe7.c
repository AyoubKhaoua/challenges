#include <stdio.h>

int main (){
  int montant,billet,mnt_d,mnt_m,mnt_m10,mnt_d10,mnt_d5,mnt_m5,mnt_d1,mnt_m1;
  
 
  printf("entrer un montant: ");
  scanf("%d",&montant);
  mnt_d=montant/20;
  mnt_m=montant%20;
  printf("Billets de 20$:%d\n",mnt_d);
  mnt_d10=mnt_m/10;
  mnt_m10=mnt_m%10;
  printf("Billets de 10$:%d\n",mnt_d10);
  mnt_d5=mnt_m10/10;
  mnt_m5=mnt_m10%10;
  printf("Billets de 5$:%d\n",mnt_d5);
  mnt_d1=mnt_m5/1;
  mnt_m1=mnt_m5%1;
  printf("Billets de 1$:%d\n",mnt_d1);


    
    return 0;
}