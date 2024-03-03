#include <stdio.h>
int main {
	int a[20],b[20],c,d,i,j,t=0,e[20],m;
	scanf("%i",&c);
	for(i=0;i<c;++i)
	scanf("%i",&a[i]);
	scanf("%i",&d);
	for(i=0;i<d;++i)
	scanf("%i",&b[i]);
	for(i=0;i<c;++i)
	if(a[i]==b[0]) {
	    e[t]=i;++t; }
	for(i=0;i<t;++i)
	{for(j=0;j<d;++j)
	{if(a[e[i]]==b[j]&&d==j-1){m=0;break;}
	if(a[e[i]]==b[j]){++e[i];if(e[i]>=c){m=1;break;}}
	if(m==0||m==1)break;}
	if(t==0||m==1)printf("no");
	if(m==0)printf("yes");
	return 0; }