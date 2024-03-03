#include <stdio.h>
int main() {
    int d,n,i;
	scanf("%d %d\n",&d,&n);
	int a[n];
	for(i=0;i<d;i++)
	    scanf("%d ",&a[i]);
	    for(i=0;i<d;i++)
	    printf("%d",a[i]);
	return 0; }