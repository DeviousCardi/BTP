#include <stdio.h>
int main() {
	int s[50];
	int a,b,k,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++);
	scanf("%d",s[i]);
	for(i=0;i<a;i++)
	{for(j=0,k=0;j<a;j++)
	if(s[i]==s[j])
	k++; }
	if(k>1)
	break; }
if(k>2)
printf("YES");
else
printf("NO");
	return 0; }