#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,k;
    scanf("%d\n"&t);
    for(i=0;i<t;i++)
    { scanf("%d",&u[i]); }
	return 0; }
int fb(int i) {
   if(i==0)
   return 0;
   else if(i==1)
   return 1;
   else
   return fb(i-1)+fb(i-2); }