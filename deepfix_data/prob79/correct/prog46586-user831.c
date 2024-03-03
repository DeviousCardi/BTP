#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,n,a[100000],t,p=0,q=0,x;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
   if(n==1){
       printf("1 0"); }
   else{
   for(j=0;j<n;j++){
       p=p+a[j]; }
     for(t=0;t<n;t++){
         q=q+a[t];
         if(q>=p/2)
         break; }
     x=t;
   printf("%d %d",x+1,n-x-1);}
	return 0; }