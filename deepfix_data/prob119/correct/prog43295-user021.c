#include <stdio.h>
#include <stdlib.h>
long hanoi(int n,int a,int b,int c,int count){
    if(n==1){
        count=count+1;
        return count; }
    else{
        count=count+hanoi(n-1,a,c,b,count);
        count=count+1;
        count=count+hanoi(n-1,c,b,a,count);
        return count; } }
int main() {
	int rod1=0,rod2=0,rod3=0,t,i,k;
	long count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    count=hanoi(k,rod1,rod3,rod2,count);
	    printf("%d\n",count); }
	return 0; }