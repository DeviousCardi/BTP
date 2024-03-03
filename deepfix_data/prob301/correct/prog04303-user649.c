#include <stdio.h>
#include <stdlib.h>
int find_rep(int a[], int n, int size) {
    int i, c=0;
    for(i=0; i<size; i++)
        if(a[i]==n)
            c++;
    return c; }
int main() {
	int a[1000], i, size, current, max_rep;
	scanf("%d\n", &size);
	current=a[0];
	max_rep=find_rep(a, a[0], size);
	for(i=0; i<size; i++) { }
	return 0; }