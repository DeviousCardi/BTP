#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int maximum=-100;
    int row;
    int i,j;
    int sum=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&row);
            sum=sum+row; }
        if(sum>maximum)
        maximum=sum;
        sum=0; }
    printf("%d",maximum);
     return 0; }