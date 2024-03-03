#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a=0;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++) {
	scanf("%d",&s[i]);
	if(n==1)
	a++;
	else if (s[0]>s[1])
	a++;
	else if((s[n-1]>s[n-2]))
	a++;
else {
         if((s[i]>s[i-1]) && s[i]>s[i+1])
         a++; } }
     if(a==0)
     printf("No");
     else printf("Yes");
	return 0; }