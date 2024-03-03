#include <stdio.h>
int main() {
    int n,m,i,j,sum=0,s=0;
    scanf("%d %d\n",&n,&m);
    int arr[m];
    for (j=1;j<=n;j++){
        for(i=0;i<m;i++){
            scanf("%d",&arr[i]); } }
    for(j=1;j<=n;j++){
        for(i=0;i<m;i++){
            sum=sum+arr[i]; }
        printf("%d",sum)
        if(s<sum){
            s=sum; } }
    printf("%d",s);
    return 0; }