#include <stdio.h>
int main() {
    int n,m,b,c,d;
    int i=1;
    int j=1;
    scanf("%d%d",&n,&m);
    int a=0,max=0,sum=0;
    for(j=1;j<=n;j++){
        sum=0;
        for(i=1;i<=m;i++) {
        scanf("%d",&a);
        sum=sum+a; }
        if(sum>max){
            max=sum; } }
    printf("%d",max);
    return 0; }