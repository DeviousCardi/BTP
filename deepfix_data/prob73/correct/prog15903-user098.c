#include <stdio.h>
int main() {
    int n,m,max,sum1=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        int sum=0;
        for(int j=1;j<=m;j++) {
            int m1;
            scanf("%d",m1);
            sum=sum+m1; }
        if(sum1<sum) {
            max=sum;
            sum1=sum; }
        else {
            max=sum1; }
        printf("\n"); }
    printf("%d",max);
    return 0; }