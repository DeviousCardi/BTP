#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int size,char a,char c,char b) {
    if(size==1) {
        return count; }
    count =count+ hanoi(size-1,a,b,c);
     count++;
   count=count+ hanoi(size-1,b,c,a);
return count; }
int main() {
    int i,t,x,arr[22],count;
    char a,b,c;
	scanf("%d",&t);
	for(i=0;i<=t;i++) {
	    scanf("%d",&arr[i]);
	    x=arr[i];
	    count=hanoi(x,a,c,b);
	    printf("%d\n",count); }
	return 0; }