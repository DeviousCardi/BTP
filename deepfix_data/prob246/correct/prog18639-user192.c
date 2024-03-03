#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=a+b+c;
    printf("%d\n",s);
    int p=a*b*c;
    printf("%d\n",p);
    float av=(a+(b)+(c))/3;
    printf("%.3f",av);
    return 0; }