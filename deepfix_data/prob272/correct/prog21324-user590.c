#include <stdio.h>
int ser(int x);
int main() {
    int a1,a2,a3,n,temp=0;
    scanf("%d %d %d",&a1,&a2,&n);
    for(int i=1;i<=n-2;i++) {
       a3=a1+a2-2;
       temp=a2;
       a1=a2;
       a2=a3; }
    printf("%d",a3);
    return 0; }