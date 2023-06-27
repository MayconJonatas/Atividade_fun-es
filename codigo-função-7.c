#include<stdio.h>

int somadenumeros (int a, int b, int c){
int soma, maior, menor;
maior = a;
menor = b ;
  se (b > a){
   maior = b;
  }
  se (c > b){
    maior = c;
    }
   se (a < b){
    menor = a;

   }
   se (c < a){

    menor = c;
   }
    soma = maior + menor;

sistema("cls");
  printf("%d", soma);
retornar somadenumeros;
  }

int main(){
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
somadenumeros(a, b, c);

return 0;
}
