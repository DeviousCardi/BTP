#include <stdio.h>
#include <stdlib.h>
int hanoi(n,r)
{   r=2;
    if(n==1)return 1;
    return 2*hanoi(n,r)+hanoi(n-1,r-1); }
int main() {
	int t,i,s[100];
	long long k;
	scanf("%d\n",&t);
	for(i=0;i<100;i++) {
	    s[i]=hanoi(i,3); }
	for(i=0;i<t;i++) {
        scanf("%lld\n",&k);
       while(k<5000000) {
       if(s[j]<k) {
           j++; }
        if(s[j]==k)
        break; } }
	return 0; }