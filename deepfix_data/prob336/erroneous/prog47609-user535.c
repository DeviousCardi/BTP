#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a)+(b*b)>=(c*c))
	printf("Acute Triangle");
     } else {
    if (a+b<=c)
    printf("Cannot form a Triangle");
    else
    printf("Not Acute Triangle");}}
	return 0; }