#include <stdio.h>
#include <stdlib.h>
int no_steps(int m){
    if(m==0)
    return 0;
    return 1+2*no_steps(m-1); }
int if_steps(int n){
    int j=0;
    while(no_steps(j+1)<5000000){
        if(n==no_steps(j))
        return 1;
        j++; }
    return 0; }
int main() {
	int i=0,n,temp;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&temp);
	    if(if_steps(temp))
	       printf("yes\n");
	    else
	       printf("no\n"); }
	return 0; }