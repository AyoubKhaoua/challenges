#include <stdio.h>
#include <math.h>
int main (){
    const float p=3.14;
    float v ;
    int r;
    printf("entrer le rayon de la sphere :");
    scanf("%d",&r);
    v=(4.0/3.0)*p*r*r*r;
    printf("%f",v);
    return 0;
}