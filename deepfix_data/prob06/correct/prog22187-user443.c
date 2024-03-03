#include <stdio.h>
#include <stdlib.h>
int num[5],a,b;
void swap(int* Pa,int* Pb)
{  int t;
    t=*Pb;
    *Pb=*Pa;
    *Pa=t; }
int main() {
	int a,b;
	a=2;
	b=3;
	swap(&a,&b);
	printf("%d  %d",a,b);
	return 0; }