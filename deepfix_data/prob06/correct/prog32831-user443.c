#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,x,y,a[50],b[50],i,j;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++) {
       for(j=0;j<k;j++) {
           if(b[j]=a[i])
           printf("%d %d",i,j); } }
    return 0; }