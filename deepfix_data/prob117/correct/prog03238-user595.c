#include <stdio.h>
#include <stdlib.h>
int count=0;
void han(int n,char a,char c,char b) {
    count++;
    if(n==0)
    return;
    han(n-1,a,b,c);
    han(n-1,b,c,a); }
int main() {
	int i,t,test[20],n;char a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&test[i]);
	    n=0;
	    while(count<=test[i]) {
	        han(n,a,c,b);
	        n++; }
	    if(count==test[i])
	    printf("yes");
	    else printf("no");
	    count=0; }
	return 0; }