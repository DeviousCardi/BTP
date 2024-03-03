#include <stdio.h>
int main(){
    int n,i,j,k,c,b;
    scanf("%d\n",&n);
    int a[n],sum[n];
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b=0;
    sum[0]=1;
    for(j=1;j<=n;j++){
        sum[j]=a[i];
        i=a[j-1]-1;
        for(k=1;k<=n;k++){
        if(sum[j]==sum[1])
        c=j;
        b=j-1;
        printf("%d %d",c,b); } }
    return 0; }