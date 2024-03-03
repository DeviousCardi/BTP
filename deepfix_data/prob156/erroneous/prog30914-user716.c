#include <stdio.h>
int main() {
    int n,m,sumRow,maxSum,i,j,a;
    int sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m,j++){
            scanf("%d ",&a);
            sumRow+=a; }
        if(sumRow>maxSum){sumRow=maxSum;} }
    printf("%d",maxSum);
    return 0; }