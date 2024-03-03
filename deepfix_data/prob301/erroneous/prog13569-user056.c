#include <stdio.h>
#include <stdlib.h>
int mode(int a[],int size) {
    int count=0,i;
    for(i=0;i<size;i++) {
        if (a[i]==a[i-1]) {
            count++; } }
    return count; }
int main() {
	int N;
	scanf("%d",&N);
	int a[N];
	int i;
	for(i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	printf("%d",mode(a[],N));
	return 0; }