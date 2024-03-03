#include <stdio.h>
int main() {
    int a1,a2,n,n1,n2,T_n;
    scanf("%d %d %d",&a1,&a2,&n);
    n1=a2;
    n2=a1;
    if(n==1)
    printf("%d",a1);
    else if(n==2)
    printf("%d",a2);
    else if(n>2) {
        for(int i=3;i<=n;i++) {
            T_n = n1 + n2 - 2;
            n2 = n1;
            n1 = T_n; } }
    printf("\n%d",T_n);
    return 0; }