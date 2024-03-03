#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,x,y,a[50],b[50],i,j=0,p=0,s;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++) {
       s=0;
       for(j=p;j<k;j++) {
           if(a[i]==b[j]) {
           printf("%d %d\n",i+1,j+1);
           break;
           s=1; } }
        if(s==1)
        p++; }
    return 0; }