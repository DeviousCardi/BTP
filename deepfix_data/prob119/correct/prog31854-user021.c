#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,int a,int b,int c){
    int count=0;
    if(n==0){
        return count; }
    else{
        count=count+hanoi(n-1,a,c,b);
        count=count+1;
        count=count+hanoi(n-1,c,b,a);
        return count; } }
int main() {
	int rod1=0,rod2=0,rod3=0,t,i,k;
	int count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    count=hanoi(k,rod1,rod3,rod2);
	    printf("%d\n",count); }
	return 0; }