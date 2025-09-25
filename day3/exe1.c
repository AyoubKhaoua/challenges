#include<stdio.h>
#include<stdbool.h>
int main(){
    bool digit_seen[10]={false};
    int digit;
    long n;
    printf("entre un nombre :");
    scanf("%ld",&n);
    while(n>0){
        digit = n%10;
        if(digit_seen[digit])
            printf("le chiffre repete est :%d\t",digit);
        digit_seen[digit]=true;
        n/=10;

    }
    
    return 0;
}