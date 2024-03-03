#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,v[20],b,a;
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&v[i]);
	scanf("%d\n",&b);
	for(i=1;i<=b;i++) {
	  scanf("%d\n",&a);
	if(v[a+1]>v[a]&&v[a-1]>v[a]){
	printf("yes");}
	else
	{printf("no"); } }
	return 0; }