#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,ctr=0,max=1;
    scanf("%d",&N);
    long arr[N];
    long mode=0;
    int i;
    for(i=0;i<N;i++) {
        scanf("%ld\n",&arr[i]); }
    for(i=0;i<N-1;i++) {
        if(arr[i]==arr[i+1])
            ctr++;
        if(ctr>=max) {
            mode=arr[i];
            ctr=0; } }
	return 0; }