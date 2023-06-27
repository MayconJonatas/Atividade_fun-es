#include<stdio.h>

void sequencial (duplo x){
int eu;
  para (i = 1; i<= x; i++){
    printf("%4.d\n", i);
  }
}

int principal(){
intx;
scanf("%d", &x);
sequencial (x);
  retornar 0;
}
