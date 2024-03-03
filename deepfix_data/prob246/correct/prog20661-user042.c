#include <stdio.h>
void spa(int a,int b,int c,int *s,int *p,float *av) {
    *s=a+b+c;
    *p=(a*b*c);
    *av=(float)*s/3; }
int main() {
    int a,b,c,s,p;
    float av;
    scanf("%d %d %d",&a,&b,&c);
    spa(a,b,c,&s,&p,&av);
    printf("%d\n%d\n%.3f",s,p,av);
    return 0; }