#include<stdio.h>

void emprestimo(float c, float m, float pcj){
soma flutuante;
pcj = pcj/100;
soma = c*m*pcj;

printf("O valor de juros e R$ %.2f ", soma);

retornar soma;
}

int principal(){
flutuar c, m, pcj;

printf("digite o valor do emprestimo ");
scanf("%f", &c);

printf("digite a quantidade de meses ");
scanf("%f", &m);

printf("digite a porcentagem de juros ");
scanf("%f", &pcj);

emprestimo(c, m, pcj);

retornar 0;
}
