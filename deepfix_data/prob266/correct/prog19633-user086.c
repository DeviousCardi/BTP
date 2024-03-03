#include <stdio.h>
int main() {
    int n,i,sum=0,d,k=1000;
    scanf("%d",&n);
    d=n;
    for(i=0;i<=3;i++) {
        sum+=n/k;
        n=n-n/k*k;
        k=k/10;
    }d++;
 printf("%d",sum);
 for(i=0; ;i++) {
     if(d%sum==0)
     {break;}
     d++; }
    printf(" %d",d);
    return 0; }