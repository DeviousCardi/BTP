#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,x,y,a[50],b[50],i,j=0,p=0,s,d=0,m[50],l[50];
    scanf("%d%d%d%d",&n,&k,&x,&y);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++) {
       s=0;
       for(j=p;j<k;j++) {
           if((a[i]-x)<=b[j] && b[j]<=(a[i]+y)) {
           m[d]=i;
           l[d]=j;
           s=1;
           d++;
           break; } }
        if(s==1)
        p++; }
     printf("%d\n",d);
     for(i=0;i<d;i++)
     printf("%d %d\n",m[i],l[i]);
    return 0; }