#include <stdio.h>
int main() {
    int n,m;
    int a,b,c;
    int d,e,f;
    int sum1,sum2;
    scanf("%d%d",&n,&m);
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
    sum1=a+b+c;
    sum2=d+e+f;
    if(sum1<sum2){
        printf("%d",sum2); }
    else
    printf("%d",sum1);
    return 0; }