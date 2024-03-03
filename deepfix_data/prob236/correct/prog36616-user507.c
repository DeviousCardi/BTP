#include <stdio.h>
int main(){
    int n,num[100],x[100],bn[100],i,j,k,l ;
    scanf ("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf ("%d",&num[i]) ; }
    for (j=0;j<n;j++) {
        scanf ("%d",&bn[j]) ; }
    for (k=0;k<n;k++) {
        x[bn[k]]=num[k] ; }
     for (l=0;l<n;l++) {
         printf ("%d ",x[l]); }
    return 0; }