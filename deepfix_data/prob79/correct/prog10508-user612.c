#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n;
	scanf("%ld",&n);
	long int t[n],a,b,count,i;
    for(i=0;i<n;i++) {
        scanf("%d",&t[i]); }
    a=t[0];
    b=t[n-1];
    count=1;
    for(i=1;i<n;i++) {
        if(a<=b) {
            a=a+t[i];
            count++; }
        else {
            b=b+t[n-i]; }
        if(i>n-i) {
            break; } }
    printf("%ld %ld",count,n-count);
	return 0; }