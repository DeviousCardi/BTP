#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=i;j<=n;j++) {
            if (j==1)
            printf("1 ");
            else
            printf("0 "); }
        printf("\n"); }
    return 0; }