#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a[j],max;
    scanf ("%d%d",&n,&m);
    for (i=1; i<=m; i++){
        for(j=0; j<n; j++){
        max=a[0];
        if (a[j]>max){
            a[j]=max; }
        printf("%d",max); } }
    return 0; }