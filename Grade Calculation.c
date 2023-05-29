#include <stdio.h>

int main(){
	
 float n1, n2, soma, media;
 
 printf("Digite sua primeira nota: ");
 scanf("%f", &n1);
 if (n1<0 || n1>10) {
     printf ("Nota Inválida!");
     return 0;
}
printf("Digite sua segunda nota: ");
scanf("%f", &n2);
if (n2<0 || n2>10) {
     printf ("Nota Invalida!");
     return 0;
}
soma=(n1+n2);
media=(soma/2);

if (media>=6) {
     printf("\n");
     printf("Sua média: %0.1f", media);
     printf("\n");
     printf("Parabéns!!! Você foi aprovado!! :)");
     return 0;
}
else
    printf("\n");
    printf("Sua média: %0.1f \n", media);
    printf("Que pena, você NAO foi aprovado :(");
}
