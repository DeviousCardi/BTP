#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,int a,int b,int c,int count){
    if(n==1){
        count=count+1;
        return count; }
    else{
        hanoi(n-1,a,c,b,count);
        count=count+1;
        hanoi(n-1,c,b,a,count);
        return count; } }
int main() {
	int rod1=0,rod2=0,rod3=0,n;
	int count=0;
	scanf("%d",&n);
	count=hanoi(n,rod1,rod3,rod2,count);
	printf("%d",count);
	return 0; }