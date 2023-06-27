#include<stdio.h>

duplo Delta(duplo a, duplo b, duplo c){
    duplo d = (b*b)- (4* a * c);
retornar d;

}
int principal(){
duplo a, b, c;
scanf("%lf %lf %lf", &a, &b, &c);
duplo d = Delta(a, b, c);
printf("%lf\n", d);

  retornar 0;
}
