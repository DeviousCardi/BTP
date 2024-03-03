#include <stdio.h>
#include <stdlib.h>
int count=0;
void han(int n,char a,char c,char b) {
    count++;
    printf("%d",count);
    if(n==0)
    return;
    han(n-1,a,b,c);
    han(n-1,b,c,a); }
int main() {
	int i,t,test[20],n;char a=a,b=b,c=c;
	scanf("%d",&t);
	han(2,a,c,b);
	printf("%d", count);
	return 0; }