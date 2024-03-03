#include <stdio.h>
#include <stdlib.h>
int main() {
    long int N,mode,s,j,k,i;
    long int str[10000],;
    scanf("%ld\n",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&str[i]); }
    count=1;
    for(j=0;j<N;j++) {
        s=count;
        for(k=j+1;k<N;k++) {
            if(str[j]==str[k]) {
                count++ }
            if(count>s) {
                mode=str[j]; } } }
    printf("%ld",mode);
	return 0; }