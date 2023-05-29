#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popa(int va[10], int tamanho){
    int x;
    
    for(x=0; x<tamanho; x++)
    va[x] = rand()%100;
    for(x=0; x<10; x++){
        printf("%3d",va[x]);
    }
printf("\n");
}
    
 void popb(int vb[10], int tamanho){
     int y;
     for(y=0; y < tamanho; y++)
     vb[y] = rand()%100;
     for(y=0;y<10;y++){
         printf("%3d",vb[y]);
         
         
     }
     printf("\n");
 }   

    
int main(){
    int x;
    int va[10], vb[10], vc[10];
    srand(time(NULL));
    popa(va, 10);
    popb(vb, 10);
    
    
    for (x=0;x<10;x++){
     vc[x]=va[x]*vb[x];
    }
    for( x=0;x<10;x++){
        printf("%3d ", vc[x]);
    }
    return 0;
}
