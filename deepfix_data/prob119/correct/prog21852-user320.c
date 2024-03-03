#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int size,char a,char c,char b) {
    if(size==0) {
        return count; }
    count =count+ hanoi(size-1,a,b,c);
     count++;
   count=count+ hanoi(size-1,b,c,a);
return count; }
int main() {
    int i,t,arr[22],count;
    char a,c,b;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&arr[i]);
	    count=hanoi(arr[i],a,c,b);
	    printf("%d\n",count); }
	return 0; }