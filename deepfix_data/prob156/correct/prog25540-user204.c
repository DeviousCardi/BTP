#include <stdio.h>
int main() {
    int m,n,i,j,d;
    scanf("%d %d",&m,&n);
    int arr[m][n];
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]); } }
    int s[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            s[i]=s[i]+arr[i][j]; }
        d=0;
        if(d<s[i])
        d=s[i]; }
    printf("%d",s[i]);
    return 0; }