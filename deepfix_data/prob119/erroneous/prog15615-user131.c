#include <stdio.h>
#include <stdlib.h>
 int dty(int k)  {
   if(k<=0)
   return 0;
 else
 return 2*dty(k-1); }
int main() {
    int i,n,m;
 scanf("%d",&n);
 for(i=1;i<=n;i++)   {
    scanf("%d",&m);
    printf("%d\n",dty(m)-1) }
	return 0; }