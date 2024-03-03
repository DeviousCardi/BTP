#include <stdio.h>
#include <stdlib.h>
int num[5],a,b;
void swap(int a,int b)
{  int t;
    t=b;
    b=a;
    a=t; }
int main() {
	int a,b;
	a=2;
	b=3;
	swap(a,b);
	printf("%d  %d",a,b);
	return 0; }