#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char b,char c){
    int count=0;
    if(n==1) {
        count=count+1; }
    hanoi(n-1,a,c,b);
    hanoi(n-1,c,b,a);
    return count; }
int main() {
	int t,i,a[20];
	for(i=0;i<t;i++) {
	    scanf("\n%d",&a[i]); }
	return 0; }