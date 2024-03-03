#include <stdio.h>
int main() {
    int n,m,i,j,sum,s=0;
    int arr[m];
    for (j=1;j<=n;j++){
        for(i=0;i<m;i++){
            scanf("%d",&arr[i]); } }
    for(j=1;j<=n;j++){
        for(i=0;i<m;i++){
            sum=sum+arr[i]; }
        if(s<sum){
            s=sum; } }
    printf("%d",s);
    return 0; }