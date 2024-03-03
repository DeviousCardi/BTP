#include <stdio.h>
#include <stdlib.h>
int main() {
    int s[20];
	int n,i,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&s[i]); }
	for(i=1;i<n;i++) {
	    if (s[i]<s[i-1]&&s[i]<s[i+1])
	    count++; }
	if (count>0)
	printf("Yes");
	else printf("No");
	return 0; }