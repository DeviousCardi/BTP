#include <stdio.h>
int main() {
    int n,m,sumRow,maxSum,i,j,a;
    maxSum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        int sumRow=0;
        for(j=0;j<m;j++){
            scanf("%d ",&a);
            sumRow+=a; }
        if(sumRow>maxSum){sumRow=maxSum;} }
    printf("%d",maxSum);
    return 0; }