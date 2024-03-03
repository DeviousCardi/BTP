#include <stdio.h>
#include <stdlib.h>
int hanoi(int num,int a,int b,int c,int count){
    if(num==1){
        count=count+1; }
    else{
        hanoi(num-1,a,c,b,count);
        count=count+1;
        hanoi(num-1,c,b,a,count); }
    return count; }
int main() {
	int a,b,c;
	int count=0,t,arr[20],i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&arr[i]);
	    hanoi(arr[i],a,b,c,count);
	    printf("%d\n",count); }
	return 0; }