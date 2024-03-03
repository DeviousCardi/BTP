#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j=0,a[j],max;
    scanf ("%d%d",&n,&m);
    for (i=1; i<=m; i++){
        for(j=0; j<n; j++){
        scanf("%d",&a[j]);
        max=a[0];
            a[j]=max;
        if (a[j]>max){ }
        printf("%d\n",max); } }
    return 0; }