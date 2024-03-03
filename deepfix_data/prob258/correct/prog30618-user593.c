#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int x[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)   {
	    scanf("%d\n",&x[i]);
	    if(x[i]>x[i-1]&&x[1]>x[0]&&x[i]>x[i+1])
	    printf("Yes\n");
	    else
	    printf("No"); }
	return 0; }