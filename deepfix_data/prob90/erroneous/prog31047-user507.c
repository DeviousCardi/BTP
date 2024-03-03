#include <stdio.h>
int main(){
    int k,n,i,j,num[499] ;
    scanf ("%d\n",&k) ;
    scanf ("%d\n",&n) ;
    for (i=0;i<=n;i++) {
        scanf ("%d",&num[i]); }
    for (j=1;j<=n;j++) {
        if (num[i]==k-j)
        printf ("lucky") ;
        else
        printf ("unlucky") }
    return 0; }