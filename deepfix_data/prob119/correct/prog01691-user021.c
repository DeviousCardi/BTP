#include <stdio.h>
#include <stdlib.h>
int hanoi(int num,char a,char b,char c,int count){
    if(num==1){
        count=1; }
    else{
        hanoi(num-1,a,c,b,count);
        count=count+1;
        hanoi(num-1,c,b,a,count); }
    return count; }
int main() {
	char a,b,c;
	int count,t,arr[20],i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&arr[i]);
	    hanoi(arr[i],a,b,c,count);
	    printf("%d\n",count); }
	return 0; }