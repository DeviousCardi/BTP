#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int s[n],i;
	for(i=0;i<n;i++)
	    scanf("%d",&s[i]);
	int t,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&k);
	    if(k==0&&s[0]<s[1]) {printf("Yes\n");continue;} else {printf("No\n");continue;}
	    if(k==(n-1)&&(s[n-1]<s[n-2])) {printf("Yes");continue;} else {printf("No\n");continue;}
	    if((s[k]<s[k+1])&&(s[k]<s[k-1]))
	    printf("Yes\n");
	    else printf("No\n"); }
	return 0; }