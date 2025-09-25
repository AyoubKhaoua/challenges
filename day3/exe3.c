#include <stdio.h>
int main(){
    int min;
    int t[6]={8,5,6,1,4,9};
    min=t[0];
    for(int i=0;i<6;i++){
        if(min<t[i]){
                min=t[i];
        }
        
    }
    printf("%d",min);
    return 0;
}