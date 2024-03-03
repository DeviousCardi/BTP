#include <stdio.h>
#include <stdlib.h>
int main() {
    long int N,S,i,k;
    long int a[10002];
    scanf("%ld\n",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    scanf("%ld\n",&S);
    for(i=0;i<N;i++) {
        for(k=i+1;k<N;k++) {
            if(a[i]+a[k]==S) {
                printf("(%ld %ld)\n",a[i],a[k]); }
            else {continue;} } }
	return 0; }