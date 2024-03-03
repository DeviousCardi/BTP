#include <stdio.h>
#include <stdlib.h>
int main()
	{int n,i;int c=0;
scanf("%d\n",&n);char s[n];
for(i=0;i<n;i++)
{scanf("%c\n",&s[i]);}
if((s[1]<s[2])||(s[n]<s[n-1]))
{c=1;}
for(i=0;i<n;i++) {
if((s[i]<s[i-1])&&(s[i]<s[i+1]))
c=c+1;}
if(c>=1)
printf("Yes");
else
printf("No");
	return 0; }