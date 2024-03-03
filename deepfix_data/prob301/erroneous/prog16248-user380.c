#include <stdio.h>
#include <stdlib.h>
int mode(int array[10000]);
int main() {
	int N,i;
	scanf("%d\n",&N);
	int array[N];
	for(i=0;i<N;i++) {
	    scanf("%d",&array[i]); }
	printf("%d",mode(array[N]));
	return 0; }
int mode(int array[N]) {
    int N;
    int c[N];
    int l;
    for(l=0;l<N;l++)
    c[l]=0;
    int i,j;
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(array[i]==array[j])
            c[i]=c[i]+1; } }
    return c[i]; }