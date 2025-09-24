#include <stdio.h>
#include <math.h>
int main (){
    const float p=3.14;
    //v=>le volume d'une sphère
    float v ;
    //r=>rayon,
    int r=10;
    v=(4.0/3.0)*p*r*r*r;
    printf("%f",v);
    return 0;
}