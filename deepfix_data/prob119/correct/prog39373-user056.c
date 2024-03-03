#include <stdio.h>
#include <stdlib.h>
 int hanoi(int a)
{ int c=1,b=2;
    if (a>1)
    c=c*b;
    a--;
    hanoi(a);
    return c-1; }
int main() {
	int s,i,f;
	scanf("%d\n",&s);
	int x[s];
	for(i=0;i<s;i++) {
	    scanf("%d\n",&f);
	x[i]=hanoi(f); }
	for(i=0;i<s;i++) {
	    printf("%d\n",x[i]); }
	return 0; }