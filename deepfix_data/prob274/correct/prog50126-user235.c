#include <stdio.h>
int main(){
   int n,count,i,j,k,t,t2,tmin ;
   scanf ("%d",&n) ;
   int a[n] ;
   int b[n] ;
   b[0]=1 ;
    for (i=0;i<=n;i++) {
        scanf ("%d",&a[i]) ; }
    b[1]=a[0] ;
    for (j=2;j<=n;j++) {
        t=b[j-1] ;
        b[j]=a[t-1] ; }
    for (i=0;i<n;i++) {
        for (j=i+1;j<=n;j++) {
            if(b[j]==b[i]) {
                t = j-i ;
                break ; } }
        if(b[j]==b[i]) {
                t = j-i ;
                break ; } }
    printf ("%d",t) ;
        return 0; }