#include<stdio.h>
int main() {
    int i,n,j,p;
    p=n%10;
    scanf("%d",&p);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++)
           printf(" ");
        for(j=2*i-1;j>0;j--)
           printf("%d",n-j+i);
        printf("\n"); }
    return 0; }