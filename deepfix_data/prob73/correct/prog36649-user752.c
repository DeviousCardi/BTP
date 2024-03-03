#include <stdio.h>
int main() {
    int n,m;
    int i,j;
    int a,max=0;
    int sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            scanf("%d",&a);
           sum=sum+a; }
        if(max<sum)
            max=sum;
    printf("%d",max); }
    return 0; }