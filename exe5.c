#include <stdio.h>
#include <math.h>

int main (){
    int x,polynome;
    printf("entrer une valeur pour x :");
    scanf("%d",&x);
    polynome=(3*(x*x*x*x*x))+(2*(x*x*x*x))-(5*(x*x*x))-(x*x)+(7*x)-6;
    printf("%d",polynome);


}