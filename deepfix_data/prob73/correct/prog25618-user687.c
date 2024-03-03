#include <stdio.h>
int main() {
    int m,n,max=0,sum,a;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) {
        sum=0;
        for(int j=0;j<m;j++) {
            scanf("%d",&a);
            sum+=a; }
        if(max<sum) {
            max=sum; } }
    printf("%d",max);
    return 0; }