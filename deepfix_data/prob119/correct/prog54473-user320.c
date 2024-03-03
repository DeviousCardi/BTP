#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int size,char a,char c,char b) {
     char t;
    if(size==1) {
        c=a;
        count++; }
     hanoi(size-1,a,b,c);
     t=c;
     c=a;
     a=b;
     b=t;
     count++;
    hanoi(size-1,b,c,a); }
int main() {
    int i,t,x,arr[22],count;
    char b,c,a;
	scanf("%d",&t);
	count=0;
	for(i=0;i<=t;i++) {
	    scanf("%d",&arr[i]);
	    x=arr[i];
	    hanoi(x,a,c,b);
	    printf("%d\n",count); }
	return 0; }