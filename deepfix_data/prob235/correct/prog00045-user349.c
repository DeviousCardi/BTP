#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d", &n);
    for (i=1; i<=(n+1)/2; i++) {
        for (j=(n+1)/2-i;j>0;j--)
        printf(" ");
        {for (k=(n+1)/2-i+1;k<=(n+1)/2+i-1&&k>=2;k++)
        printf("%d",k);
        printf("\n"); } }
int value=0,temp;
    for(i=(n+1)/2;i>=1;i--) {
        value= (value+1)%10;
        temp=value;
        for(j=0;j<(n+1)/2-i;j++){
            printf(" "); }
        for(j=1;j<=2*i-1;j++) {
            printf("%d",temp);
            temp = (temp+1)%10; }
        printf("\n"); }
    return 0; }