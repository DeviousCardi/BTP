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
	int s=0;
	for(i=0;i<m;i++)
	for(j=s;j<n;j++)
	if((a[j]<=b[i]+y)&&(a[j]>=b[i]-x)){c++;s=j+1;break;}
	printf("%d\n",c);
	s=0;
	for(i=0;i<m;i++)
	for(j=s;j<n;j++)
	if((a[j]<=b[i]+y)&&(a[j]>=b[i]-x))
	{printf("%d %d\n",j,i);s=j+1;break;}
	return 0; }