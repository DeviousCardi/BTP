#include <stdio.h>
int main() {
    int n,Tn,a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&n);
    for(i=3;i<=n;i++) {
        Tn = a + b -2;
        a=b;
        b=Tn; }
    if (n==1)
    printf("%d",a);
    if (n==2)
    printf("%d",b);
    if(n>2)
    printf("%d",Tn);
    return 0; }