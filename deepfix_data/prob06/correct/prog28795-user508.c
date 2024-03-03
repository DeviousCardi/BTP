#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,c=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<m;i++)
	scanf("%d",b+i);
	for(i=0;i<n;i++)
	{j=0;
	while(j!=-1)
	{if((a[i]<b[j]+y)&&(a[i]>b[j]-x)){c++;b[j]=-1;}
	else j++;}}
	printf("%d",c);
	return 0; }