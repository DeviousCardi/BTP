#include <stdio.h>
#include <stdlib.h>
void no_of_pairs(int* a, int* b, int n, int m, int x, int y) { }
int main() {
	unsigned int n, m;
	unsigned long int x, y;
	int *a, *b, c, i;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%l",&x);
	scanf("%l",&y);
	a = (int*)malloc(n*sizeof(unsigned long int));
	b = (int*)malloc(m*sizeof(unsigned long int));
	for(i=0;i<n;i++) {
	    scanf("%d",(a+i)); }
	for(i=0;i<m;i++) {
	    scanf("%d",(b+i)); }
	no_of_pairs(a,b,n,m,x,y);
	return 0; }