#include <stdio.h>
int cal(int,int);
int main() {
	int d,n,a[100],i;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++){
	    scanf("%d",&a[i]); }
	if(n<d)
	printf("%d",a[n]);
	else
	{int c=1,k=0;
	for(;i<=n;i++){
	  while(c<=d)
	   {k+=a[i-c];
	   c++; }
	   a[i]=k; }
	printf("%d",a[n]); }
	return 0; }