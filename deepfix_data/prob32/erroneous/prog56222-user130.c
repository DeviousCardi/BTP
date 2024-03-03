#include <stdio.h>
#include <stdlib.h>
int main() {
	{int n,i,t;
scanf("%d\n",&n);char s[n];
for(i=0;i<n;i++)
{scanf("%c\n",&s[i]);}
for(i=0;i<n;i++)
{if((s[i]<s[i-1])&&(s[i]<s[i+1])) {
printf("Yes");}}
	return 0; }