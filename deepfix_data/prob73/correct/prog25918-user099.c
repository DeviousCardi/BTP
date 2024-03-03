#include <stdio.h>
int main() {
    int n,m,sum,gold,temp;
    scanf("%d%d\n",&n,&m);
    sum=0,gold=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            scanf("%d",&temp);
            sum=sum+temp; }
        printf("%d\n",sum);
        scanf("\n");
        if(sum>gold)
            gold=sum;
        sum=0; }
    return 0; }