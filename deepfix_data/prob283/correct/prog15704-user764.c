#include <stdio.h>
#include <stdlib.h>
int a(int m,int n){
    if(m==0)
    return n+1;
    else if((m>0)&&(n==0))
    return a(m-1,n);
    else if((m>=0)&&(n>0))
    return a(m-1,a(m,n-1)); }
int main() {
	return 0; }