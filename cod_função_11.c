#include <stdio.h>

divisores(int a){
int i;

para (i = 1; i<= a; i++){
    se (a %i == 0){
        printf("%d\n", i);
        }
}

retornar i;

}
int main(){
int a;

scanf("%d", &a);

divisores(a);
retornar 0;
}
