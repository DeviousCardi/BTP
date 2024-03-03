#include <stdio.h>
int main(){
    int m,n,i,j,l=0,k,sum=0,max=0;
    scanf ("%d%d", &m, &n);
    int val[m];
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf ("%d",&l);
            sum=sum+l;
            val[i]=sum; }
        sum=0; }
    for (k=0;k<m;k++)
    max=(max>val[k] ? max : val[k]);
    printf ("%d", max);
    return 0; }