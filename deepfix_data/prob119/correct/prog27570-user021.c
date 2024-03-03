#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,int a,int b,int c){
    int count;
    if(n==1){
        count=count+1;
        return count; }
    else{
        hanoi(n-1,a,c,b);
        count=count+1;
        hanoi(n-1,c,b,a);
        return count; } }
int main() {
	int rod1=0,rod2=0,rod3=0,n;
	int m;
	scanf("%d",&n);
	m=hanoi(n,rod1,rod3,rod2);
	printf("%d",m);
	return 0; }