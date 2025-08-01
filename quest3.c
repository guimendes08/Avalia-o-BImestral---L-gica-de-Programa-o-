#include <stdio.h>

int main(){
    long int mont, conta;
    short int idade;

    printf("Informe sua idade: \n");
    scanf("%hd", &idade);

    printf("Informe o valor do montante a ser depositado: \n");
    scanf("%ld", &mont);

    printf("Informe o numero da conta: ");
    scanf("%ld", &conta);

    printf("Idade \t Montante \t Conta \n %hd \t %ld \t \t %ld \n", idade, mont, conta);
}