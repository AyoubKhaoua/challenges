#include<stdio.h>
#include<stdbool.h>
int main(){
    int digit_repeted[10]={0};


    int digit;
    long n;
    printf("entre un nombre :");
    scanf("%ld",&n);
    while(n>0){
        digit = n%10; //2
       // printf("%d\t",i);
        digit_repeted[digit]++; 
         n/=10;  
       } 
       for(int i=0;i<10;i++){
        printf("%d ===> %d\n",i, digit_repeted[i]);
        
       }

    
    
    return 0;

}