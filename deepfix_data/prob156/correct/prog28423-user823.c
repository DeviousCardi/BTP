#include <stdio.h>
int main() {
    int n,m,i,j,sum=0,s=0;
    scanf("%d %d\n",&n,&m);
    int arr[m];
    for (j=0;j<n;j++){
        for(i=0;i<m;i++){
            scanf("%d",&arr[i]); } }
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            sum=sum+arr[i]; }
        printf("%d\n",sum); }
    return 0; }