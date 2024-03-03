#include <stdio.h>
int main(){
    int n,i,x,j;
    scanf("%d",&n);
    int m[n],a[n+1];
    for (i=0;i<n;i++){
                    scanf("%d",&m[i]); }
    for (i=0;i<=n;i++){
        m[i]=x;
        a[i+1]=m[x-1]; }
    for (i=1;i<=n;i++){
        for (j=2;j<=n-1;j++){
            if (a[i]=a[j]){
                printf("%d %d",j,j-i); } } }
    return 0; }