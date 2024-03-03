#include <stdio.h>
int main() {
    int n,m,gold[500][1000];
    int sum,max;
    max=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)  {
        sum=0;
        for(int j=0;j<m;j++)  {
            scanf("%d",gold[i][j]);
            sum=sum+gold[i][j]; }
        if(sum>=max)  {
            max=sum; } }
    printf("%d",max);
    return 0; }