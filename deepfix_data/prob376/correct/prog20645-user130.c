#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{int ans=0;int i;
  if(n==1)
  return 1;
  else
  for(i=0;i<=(n-1);i++) {
      ans=ans+catalan(i)*catalan((n-1)-i);
  }return ans; }
int main() {
    int t;scanf("%d\n",t);int a[t];int k;int i;
	for(i=0;i<t;i++)
	{scanf("%d\n",k);
	   a[i]=catalan(k); }
	for(i=0;i<t;i++) {
	    printf("%d",a[i]); }
	return 0; }