#include <stdio.h>
#include <stdlib.h>
int num[5],a,b;
void swap(int i,int j)
{  int t;
    t=j;
    j=i;
    i=t;
    printf("%d  %d",a,b); }
int main() {
	int a,b;
	a=2;
	b=3;
	swap(a,b);
	printf("%d  %d",a,b);
	return 0; }