#include <stdio.h>
#include <stdlib.h>
int find_rep(int a[], int n, int size) {
    int i, c=0;
    for(i=0; i<size; i++)
        if(a[i]==n)
            c++;
    return c; }
void read_arr(int a[], int size) {
    int i;
    for(i=0; i<size; i++)
        scanf("%d", &a[i]); }
int main() {
	int a[1000], i, size, max_rep, mode;
	scanf("%d\n", &size);
	max_rep=find_rep(a, a[0], size);
	mode=a[0];
	for(i=1; i<size; i++) {
	    if(find_rep(a, a[i], size)>=max_rep) {
	        max_rep=find_rep(a, a[i], size);
	        mode=a[i]; } }
	printf("%d", mode);
	return 0; }