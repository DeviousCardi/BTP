#include <stdio.h>
int main() {
    int n,m,sum,max=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        sum=0;
        for(int j=0;j<m;j++) {
            int a;
            scanf("%d",&a);
            sum=sum+a; }
        if(sum>max)
        max=sum; }
    printf("%d",max);
    return 0; }