#include <stdio.h>
int main (){
    int i,next1,prev1,j;
    char ISBN[18];
    next1=0;
    prev1=0;
    int length =sizeof(ISBN)/sizeof(ISBN[0]);
    printf("entre Numero International Normalise du Livre :");
    scanf("%s",ISBN);
    //"971-2-112-132-12" i = 4
    for(i=0;i<length;i++){
        if(ISBN[i]=='-'){
            next1 = i;
            for(j=prev1;j<next1;j++){
                printf("%c",ISBN[j]);
            }
            printf("\n");
            prev1 = i+1;
        }
    }
    
}

