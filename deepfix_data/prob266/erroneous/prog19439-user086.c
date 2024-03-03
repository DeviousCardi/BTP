#include <stdio.h>
int main() {
    int n,i,sum=0,k=1000;
    scanf("%d",&n);
    printf(" %d",n)
    for(i=0;i<3;i++) {
        sum+=n/k;
        n=n-n/k*k;
        k=k/10; }
 printf("%d",sum);
 for(i=0; ;i++) {
     if(n%sum==0)
     {break;}
     n++; }
    printf(" %d",n);
    return 0; }