#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    int i,sum=0;
    if(n==0) {
        return 1; }
    else {
        for(i=0;i<n;i++) {
        sum=sum+Catalan_no(i)*Catalan_no(n-i-1); } }
    return sum; }
int main() {
	printf("%d",Catalan_no(5));
	return 0; }