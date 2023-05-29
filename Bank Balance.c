#include <stdio.h>

int main()
{
    int conta = 0, senha = 0;
    float saldo = 50000.00, saque = 0.00;
   
    printf("Digite o numero da conta: ");
    scanf("%d", &conta);
   
    printf("Digite a senha: ");
    scanf("%d", &senha);
   
    if(conta == 12345 && senha == 3345 ){
        printf("Bem vindo cliente, seu saldo e de %.2f \n",saldo);
        printf("Digite o valor desejado para saque: ");
        scanf("%f", &saque);
        if(saque <= saldo){
            saldo = saldo - saque;
            printf("O saque foi de: %.2f e o saldo restante e de: %.2f", saque, saldo);
        } else {
           printf("Saldo insulficiente, valor atual: %.2f ", saldo);
        }
    } else {
        printf("Conta ou senha invalidos");
    }
   

    return 0;
}
