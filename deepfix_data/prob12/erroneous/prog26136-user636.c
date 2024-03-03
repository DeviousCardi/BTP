#include <stdio.h>
int main() {
    int i,j,df,n,m,dn;
    m=0;
    scanf("%d",&n);
    int dn[];
    for(i=0;i<2n;i++) {
        scanf("%d",&num[i]); }
    for(i=0;i<2n;i++) {
        for(j=0;((j<2n)&&j!=i);j++) {
            if(dn[i]==dn[j]) {
                df=j>=i?(j-i):(i-j) ;
                m=df>m?m:df ;
                break; } } }
    printf ("%d",m);
    return 0; }