#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int x[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)   {
	    scanf("%d\n",&x[i]);
	    if(x[i+1]>=x[i])
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }