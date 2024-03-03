#include <stdio.h>
#include <stdlib.h>
static int count;
void hanoi(int n,char a,char c,char b) {
    if(n==0) return;
    hanoi(n-1,a,b,c);
    count++;
    hanoi(n-1,b,c,a); }
int main() {
	int t,k;
	int i;
 hanoi(4,a,c,b);
	printf("%d",count);
	return 0; }