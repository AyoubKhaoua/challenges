#include <stdio.h>
int main (){
    //code is loading.......................................
    int h,m,time,i;
    int hd[8]={8,9,11,12,2,3,7,9};
    
    for (int i=0;i<8;i++){
        h[i]=h[i]*60;
    }

    
printf("donner une heure :");
scanf("%d",&h);
printf("donner les minutes :");
scanf("%d",&m);
time=(h*60)+m;
printf("time par minute et :%d",time);
}