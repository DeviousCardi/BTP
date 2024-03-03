#include <stdio.h>
int main() {
    int a[1000][1000];
    int n,m,i,j,x,sum;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",a[i][j]); } }
    x=0;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum=sum+a[i][j]; }
        if(x>sum){
        x=x;
        }else{
            x=sum; } }
    printf("%d",x);
    return 0; }