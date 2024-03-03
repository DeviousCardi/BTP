#include <stdio.h>
#include <stdlib.h>
int fb(int i) {
   if(i==0)
   return 0;
   else if(i==1)
   return 1;
   else
   return fb(i-1)+fb(i-2); }
int main() {
    int i,t,j;
    scanf("%d\n",&t);
    int u[t];
    for(i=0;i<t;i++)
   {  int s=0;
       scanf("%d\n",&u[i]);
     for(j=0;j<20;j++) {
	     if(u[i]==fb(j))
	       s=1; }
	 if(s==1)
	 printf("yes\n");
	 else
	 printf("no\n"); }
	return 0; }