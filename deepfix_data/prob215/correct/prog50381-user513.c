#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,s,j=1,count[s];
	scanf("%d",&s);
	for(i=1;i<=s;i++){ {
	        scanf("%d",&count[i]); }
	  for(j=1;j<=s;j++)
	    {if(s%i==0)
	            j= count[i];
    else
                continue;} }
	         if(j=s)
	         printf("YES");
	         else
	         printf("NO");
	return 0; }