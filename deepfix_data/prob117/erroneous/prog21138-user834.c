#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi()
int main() {
	long long t;
	scanf("%lld",&t);
	int i;
	int j=0;
	for(i=0;i<t;i++){
	    long long n;
	    scanf("%lld",&n);
	    int f=0;j=0;
	    while(log(n)<=j){
	            if(log(n)==j){
	            f=1;
	            break; }
	        else
	        j++; }
	if(f==1)
	printf("yes\n");
	else
	printf("no\n"); }
	return 0; }