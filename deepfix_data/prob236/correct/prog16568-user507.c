#include <stdio.h>
int main(){
    int n,num[100],bn[100],i,j ;
    scanf ("%d\n",n);
    for(i=0;i<=n;i++) {
        scanf ("%d",&num[i]) ; }
    for (j=0;j<=n;j++) {
        scanf ("%d",&bn[j]) ; }
    for (j=0;j<=n;j++) {
    printf ("%d ",num[j]) ; }
    printf("end");
    return 0; }