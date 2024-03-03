#include <stdio.h>
#include <stdlib.h>
long long  hanoi(long long n)
{   if(n==0)return 0;
    if(n==1)return 1;
    return (2*hanoi(n-1)-1/n); }
int main() {
	int t,i,j=0,s[100];
	long long k;
	scanf("%d\n",&t);
	for(i=0;i<100;i++) {
	    s[i]=hanoi(i); }
	for(i=0;i<t;i++) {
        j=0;
        scanf("%lld\n",&k);
       while(k<5000000) {
       if(s[j]-1<k) {
           j++; }
        if(s[j]-1>=k)
        break; }
       if(s[j]==k)
       printf("yes\n");
       else
       printf("no\n"); }
	return 0; }