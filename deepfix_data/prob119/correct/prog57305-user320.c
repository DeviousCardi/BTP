#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int size,char a,char c,char b)
{   count = count+1;
    if(size==1) {
        c=a; }
     hanoi(size-1,a,b,c);
     c=a;
    hanoi(size-1,b,c,a); }
int main() {
    int i,t,arr[22],count;
    char b,c,a;
	scanf("%d",&t);
	count=0;
	for(i=0;i<t;i++) {
	    scanf("%d",&arr[i]);
	    hanoi(arr[i],a,b,c);
	    printf("%d",count); }
	return 0; }