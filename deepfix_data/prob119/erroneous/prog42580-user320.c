#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int size,char a,char b,char c)
{   count = count+1;
    if(size=1) {
        c=a; }
     hanoi(size-1,a,b,c);
     c=a;
    hanoi(size-1,b,c,a); }
int main() {
    int i,t,a[22];
	scanf("%d",&t);
	count=0;
	for(i=0;i<t;i++) {
	    scanf("%d",&a[i]);
	    hanoi(a[i],b,c);
	    printf("%d",count); }
	return 0; }