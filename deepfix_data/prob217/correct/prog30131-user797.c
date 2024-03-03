#include <stdio.h>
#include <stdlib.h>
int main() {
    long int N,S;
    scanf("%ld",&N);
    long int a[N],i=0,j=0;
    for (i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    scanf("%ld",&S);
    for (i=0;i<N;i++) {
        for (j=0;(j<N)&&(j>i);j++) {
            if (a[i]+a[j]==S)
        printf("(%ld,%ld)\n",a[i],a[j]); } }
	return 0; }