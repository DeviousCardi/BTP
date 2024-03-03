#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x[20],y[20],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    {scanf("%d",&x[i]);}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	    {scanf("%d",&y[i]);}
	for(i=0;i<n;i++)
	for(j=0;j<m;j++){
	        if (x[i]==y[j])
	            {printf("%d",x[i]);
	            break;}
	        else
	        {printf("NO");} }
	return 0; }