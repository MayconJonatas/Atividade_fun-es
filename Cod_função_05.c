#include<stdio.h>

void P_A(duplo a1, duplo n, duplo vn){
duplo soma;


soma = (vn* (a1 + n))/2;

printf("A soma dos %lf primeiros termos da PA e: %.3lf\n", vn, soma);


retornar soma;
}

int principal(){
duplo a1, n, vn;

printf("digite o primeiro elemento:\n");
scanf("%lf", &a1);

printf("digite o n-ésimo elemento:\n");
scanf("%lf", &n);

printf("digite o valor de n:\n");
scanf("%lf", &vn);

P_A(a1, n, vn);

retornar 0;
}
