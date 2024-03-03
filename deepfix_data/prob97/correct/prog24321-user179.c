#include<stdio.h>
int main() {
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++)
           printf(" ");
        for(j=1;j>0;j--)
           printf("%d",(n-j+i)%10);
        printf("\n"); }
    return 0; }