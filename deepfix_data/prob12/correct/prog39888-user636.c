#include <stdio.h>
int main() {
    int i,j,df,n,m;
    m=500;
    scanf("%d",&n);
    int dn[n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&dn[i]); }
    for(i=0;i<2*n;i++) {
        for(j=0;((j<n)&&j!=i);j++) {
            if(dn[i]==dn[j]) {
                df=j>=i?(j-i):(i-j) ;
                m=df>m?m:df ;
                break; } } }
    printf ("%d",m);
    return 0; }