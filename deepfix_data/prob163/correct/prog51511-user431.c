#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    if(a>b)
    return a;
    else if(b>a)
    return b;
    else
    return a; }
int main() {
	int arr[5];
	int i;
	for(i=0;i<5;i++) {
	    arr[i]=getchar()-48;
	    printf("%d", arr[i]); }
	return 0; }