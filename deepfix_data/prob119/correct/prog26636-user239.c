#include <stdio.h>
#include <stdlib.h>
int rec(int x);
int main() { int tcase,ans,i,n;
             scanf("%d",&tcase);
             for(i=1;i<=tcase;i++)
             { scanf("%d",&n);
                 ans=rec(n)-1;
	             printf("%d\n",ans); }
	return 0; }
int rec(int x) {
     int mul ;
     if(x==1)
     return(1);
      else
      mul=2*rec(x-1);
      return(mul); }