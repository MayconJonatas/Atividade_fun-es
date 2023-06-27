#include<stdio.h>

float maior (float x, float y){
  flutuar m;
    se (x > y){
        m = x;
    } outro{
    m = y;
    }

   retornar m;
}


int principal(){
flutuante x, y;
scanf("%f %f", &x, &y);
float m = maior(x, y);
printf("%lf\n", m);

  retornar 0;
}
