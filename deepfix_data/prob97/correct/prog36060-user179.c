#include<stdio.h>
int main() {
    int i,n,j,p;
    scanf("%d",&n);
    p=n%10;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++)
           printf(" ");
        for(j=2*i-1;j>0;j--)
           printf("%d",(p-j+i)%10);
        printf("\n"); }
    return 0; }