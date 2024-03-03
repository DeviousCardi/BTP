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
	for(i=0;i<t;i++) {
	    scanf("%d",&test[i]);
	    n=1;
	    while(count<=test[i]) {
	        count=0;
	        han(n,a,c,b);
	        n++;
	        if(count==test[i])
	    {printf("yes");break;} }
	    if(count>test[i]) printf("no"); }
	return 0; }