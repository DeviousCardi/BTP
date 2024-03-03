#include <stdio.h>
#include <stdlib.h>
int sumdiv(int n) {
    int i,sum=0;
    for(i=2;i*i<=n;i++) {
        if(n%i==0) {
            sum=sum+i+(n/i); } }
    return (sum+1); }
int main() {
	int n;
	scanf("%d",&n);
	int sum=sumdiv(n);
	if(sum==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }