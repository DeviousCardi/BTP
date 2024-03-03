#include <stdio.h>
#include <stdlib.h>
int C(int a, int b) {
    if(a==b) return 1;
    else if (b==0) return a;
    else return C(a-1,b-1)+C(a-1,b); }
int main() {int a, int b;
scanf("%d%d",&a,&b);
	printf("%d",C(a,b));
	return 0; }