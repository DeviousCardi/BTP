#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t;
	t=0;
	scanf("%d\n", &n);
	int a[n];
	for(i=0;i<1;i++) scanf("%d\n", &a[i]);
	for(i=1;i<(n-1);i++){
	    if((a[i]<a[(i-1)])&&(a[i]<a[(i+1)])){t=1;} }
	if((a[0]<a[1])||(a[(n-1)]<a[(n-2)])){t=1;}
	if(t){printf("Yes");}
	else printf("No");
	return 0; }