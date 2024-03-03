#include <stdio.h>
int main(){
    int m,n,i,j,l,sum,max=0;
    scanf ("%d%d", &m, &n);
    for (i=0; i<m; i++){
        for (j=0,sum=0; j<n; j++) {
            scanf ("%d",&l);
            sum=sum+l; }
        max=(max>sum ? max : sum); }
    printf ("%d", max);
    return 0; }