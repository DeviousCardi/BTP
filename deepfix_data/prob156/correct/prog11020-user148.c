#include <stdio.h>
int main(){
    int m,n,i,j,l,sum,max;
    scanf ("%d%d", &m, &n);
    int val[m];
    for (i=0; i<m; i++){
        for (j=0,sum=0; j<n; j++){
            scanf ("%d",&l);
            sum=sum+l;
            val[i]=sum; } }
    for (j=0,max=val[90];j<m;j++)
    max=(max>val[j] ? max : val[j]);
    printf ("%d", max);
    return 0; }