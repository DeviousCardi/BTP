#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,t,j,s=0;
     int u[25],f[19];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    scanf("%d",&u[i]);
    for(i=0;i<20;i++) {
       f[i]=fb(i); }
	for(i=0;i<t;i++)
	 { for(j=0;j<20;j++) {
	     if(u[i]==f[j])
	       s=1; }
	 if(s==1)
	 printf("yes\n");
	 else
	 printf("no\n"); }
	return 0; }
int fb(int i) {
   if(i==0)
   return 0;
   else if(i==1)
   return 1;
   else
   return fb(i-1)+fb(i-2); }