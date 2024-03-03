#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d \n",&n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d ",&k);
        printf("%d ",k);
    }   printf("\n"); }
    return 0; }