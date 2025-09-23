#include <stdio.h>
#
int main (){
    int x,polynome;
    printf("entrer une valeur pour x :");
    scanf("%d",&x);
    polynome=(((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    printf("%d",polynome);
    return 0;
}