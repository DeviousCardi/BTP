#include <stdio.h>
int main(){
    int n;
    scanf("%d \n",n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d ",j);
        printf("%d ",j); } }
    printf("\n");
    return 0; }