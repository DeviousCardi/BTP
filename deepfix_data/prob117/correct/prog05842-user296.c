#include <stdio.h>
#include <stdlib.h>
long long  hanoi(long long n) {
    if(n==1)return 1;
    return 2*hanoi(n-1); }
int main() {
	int t,i,j=0,s[100];
	long long k;
	scanf("%d\n",&t);
	for(i=0;i<100;i++) {
	    s[i]=hanoi(i); }
	for(i=0;i<t;i++) {
        scanf("%lld\n",&k);
       while(k<50000) {
       if(s[j]<k) {
           j++; }
        if(s[j]>=k)
        break; }
       if(s[j]==k)
       printf("yes\n");
       else
       printf("no\n"); }
	return 0; }