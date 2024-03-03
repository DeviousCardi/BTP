#include <stdio.h>
#include <stdlib.h>
long sumdiv(long n) {
    long S;S=0;long i;
    for(i=1;i<(n/2)+1;i=i+1) {
        if(n%i==0){S=S+i;} }
    return S; }
int main() {
	long N;
	scanf("%ld",&N);
	if(sumdiv(N)==N){printf("YES");}
	else{printf("NO");}
	return 0; }