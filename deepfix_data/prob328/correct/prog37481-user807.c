#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,t,j;
     int u[25],f[25];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    scanf("%d",&u[i]);
    for(i=0;i<20;i++) {
       f[i]=fb(i); }
	for(i=0;i<t;i++)
	{for(j=0;j<20;j++)
	 {if(u[i]==f[j])
	    printf("Yes\n");
	     else
	     printf("No\n"); } }
	return 0; }
int fb(int i) {
   if(i==0)
   return 0;
   else if(i==1)
   return 1;
   else
   return fb(i-1)+fb(i-2); }