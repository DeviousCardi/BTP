#include <stdio.h>
#include <stdlib.h>
int a;
int check_perfect(int a) {
    int j, b, p=2, k=0;
    for(j=1; j<a; j++) {
            if(a%p==0) {
                k=k+(a/p); } }
    if(a=k) {
        b=1; }
    else {
        b=0; } }
    return b; }
int main() {
	int b;
	long long int n;
	scanf("%lld",&n);
	check_perfect(n);
	if((b=1)) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }