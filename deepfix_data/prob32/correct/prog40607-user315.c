#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,i,n;
	int s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)    {
	    s[i]=getchar; }
	for(j=1;j<n-1;j++)    {
	    if(s[j]<s[j-1]&&s[j]<s[j+1])    {
	        printf("Yes");
	        break; }
	    else printf("No"); }
	return 0; }