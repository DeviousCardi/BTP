#include <stdio.h>
#include <stdlib.h>
int perfect(int a) {
    int i,sum=0;
    for(i=1;i<a;i++) {
        if(a%i==0) {
            sum=sum+i; } }
    return sum; }
int main() {
	int n;
	scanf("%d",&n);
	if(n==perfect(n)) {
	    printf("YES"); }
	else{
	printf("NO"); }
	return 0; }