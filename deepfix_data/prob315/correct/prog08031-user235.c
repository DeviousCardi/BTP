#include <stdio.h>
#include <stdlib.h>
int main () {
    int a,b,d,e=0 ;
    scanf ("%d",&a);
    int c[a] ;
    for(b=0;b<a;b++) {
        scanf ("%d",&c[b]) ;
        for (d=b+1;d<a;d++) {
            if (c[d]<c[b])
            e=e+1 ; } }
    printf ("%d",e) ;
    return 0 ; }