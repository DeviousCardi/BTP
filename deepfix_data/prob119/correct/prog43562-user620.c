#include <stdio.h>
#include <stdlib.h>
int power(int n){
    if(n==1)
        return 2;
    else
      return 2*power(n-1); }
int main() {
	int n,i;
	scanf("%d",&n);
	int t[n];
	for(i=0;i<n;i++)
	  {scanf("%d",&t[i]);
	  printf("%d",t[i]);}
	for(i=0;i<n;i++); {
	   printf("%d\n",(power(t[i])-1)); }
	return 0; }