#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,a[10000],b[10000],i,j,k=0,max,min,count=0,man[1000],st=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<m;i++)
     scanf("%d",&b[i]);
     for(i=0;i<m;i++) {
         max=b[i]+y;
         min=b[i]-x;
         for(j=st;j<n;j++) {
             if(a[j]>min&&a[j]<max) {
                  count++;
                  st=j+1;
                  man[k]=j+1;
                  k++;
                  break; } } }
     printf("%d\n",count);
     for(i=0;i<m;i++) {
         if(n>0)
         printf("%d %d\n",man[i],i+1); }
	return 0; }