#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    int pr = a*b*c;
    float av = ((a+b+c)/3.0);
    printf("%d\n",sum);
    printf("%d\n",pr);
    printf("%.3f",av);
    return 0; }