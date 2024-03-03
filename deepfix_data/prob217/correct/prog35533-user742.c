#include <stdio.h>
#include <stdlib.h>
void findnos(int a[], int size, int s)
{ int i, j;
  for(i=0; i<size-1; i++)
     { for(j=i+1; j<size; j++)
       { if(a[j]==(s-a[i]))
           { printf("(%d,%d)", a[i], a[j]);
             printf("\n");
             break; } } } }
int main() {
	int t, i, a[10000], n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	   { scanf("%d", &a[i]); }
	scanf("%d", &t);
	findnos(a, n, t);
	return 0; }