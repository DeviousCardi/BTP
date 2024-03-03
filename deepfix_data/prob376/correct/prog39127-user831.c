#include <stdio.h>
#include <stdlib.h>
int binomial (int n,int k){
    if(n==0&&k==0)
    return 1;
    else if(k==0&&n>0)
    return 1;
    else if(n<k)
    return 0;
    else
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
	return 0; }