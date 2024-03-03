#include <stdio.h>
#include <stdlib.h>
int mod(int n)
{if(n<0)
    return(-1*n);
 else
    return n;
    return 0; }
int main() {
    int i,n,m,x,y,pos,diff,j,d;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	    scanf("%d ",&a[i]);
	printf("\n");
	for(j=0;j<m;j++)
	    scanf("%d ",&b[i]);
	printf("\n");
	for(i=0;i<n;i++)
	  {d=a[i];diff=20000;
	   for(j=0;j<m;j++)
	     {if((b[j]>=d-x)&&(b[j]<=d+y)&&(b[j]>0))
	        {if(mod(b[j]-d)<diff)
	           {pos=j;
	            diff=mod(b[j]-d); } } }
	     if(pos>=0)
	      {printf("%d %d",(i+1),b[pos]);
	       b[pos]=-1*b[pos];
	       pos=0; }
	return 0; }