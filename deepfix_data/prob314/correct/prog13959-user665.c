#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,v[n],b,a;
     scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&v[i]);
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{  scanf("%d",&a);
	if((v[a]<=v[a-1]) && (v[a]<=v[a+1])){printf("yes");}
	else{printf("No");} }
	return 0; }