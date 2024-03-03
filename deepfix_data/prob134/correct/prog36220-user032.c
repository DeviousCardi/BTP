#include <stdio.h>
#include <stdlib.h>
int main() {
	int B(int n,int k){
	    if(n<k)
	    return 0;
	    else if(k==0)
	    return 1;
	    else
	    return B(n-1,k)+B(n-1,k-1); }
	int n,k,b;
	scanf("%d",&b);
	for(n=0;n<=20;n++){
	    for(k=0;k<=20;k++){
	    if(b==B(n,k))
	    printf("%d %d",n,k);
	    break;
	    if(n>20)
	    return -1;}
	}return 0; }