#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int s[2*n],i;
	for(i=0;i<2*n;i++)
	    {s[i]=getchar();}
	int t,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
	    if(s[k]<s[k+1]&&s[k]<s[k-1])
	    printf("Yes\n");
	    else printf("No\n"); }
	return 0; }