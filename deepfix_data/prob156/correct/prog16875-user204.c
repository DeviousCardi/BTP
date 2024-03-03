#include <stdio.h>
int main() {
    int m,n,i,j,d=0;
    scanf("%d %d",&m,&n);
    int s[m];
    int arr[m][n];
     for(i=0;i<m;i++){
         s[i]=0;
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]); } }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            s[i]=s[i]+arr[i][j]; }
        if(d<s[i])
        d=s[i]; }
    printf("%d",d);
    return 0; }