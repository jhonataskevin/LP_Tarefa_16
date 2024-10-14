#include <stdio.h>

int main(){

    int i, N, contador=0;

    scanf("%d", &N);
    for(i=1; i<N*4; i++){

        printf("%d ", i);
        contador++;

        if(contador==3){
            printf("PUM\n");
            contador=0;
            i++;
        }       
    }
    return 0;
}
