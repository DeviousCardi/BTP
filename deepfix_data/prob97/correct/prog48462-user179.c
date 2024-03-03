#include<stdio.h>
int main() {
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>0;i++) {
        for(j=n-i;j>0;j--)
            printf(" ");
        for(j=2*i-1;j>0;j--)
            if(j%2==1)
                printf("*");
            else
                printf("x");
        printf("\n"); }
    return 0; }