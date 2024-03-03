#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,m,x,y,i,j=0,count=0,k=0;
   scanf("%d%d%d%d",&n,&m,&x,&y);
   int *a=(int*)malloc(n*sizeof(int));
   int *b=(int*)malloc(m*sizeof(int));
   int *c=(int*)malloc(3*(n+m)/2*sizeof(int));
   for(i=0;i<n;i++)
   scanf("%d",a+i);
   for(i=0;i<m;i++)
   scanf("%d",b+i);
   for(i=0;i<n&&j<m;i++){
       if(a[i]+y<b[j]){
           i++;
        if(a[i]-x)<=(b[j]) && (a[i]+y)>=(b[j]){
          count++;
          *(c+k)=i+1;
          *(c+k+i)=j+1;
          k=k+2;
          j++; } } }
   printf("%d",count);
	return 0; }