#include <stdio.h>
#include <stdlib.h>
int Ackermann(int n,int m) {
    if(m==0)
        return n+1;
    if(m>0&& n==0)
        return Ackermann(m-1,1);
    if(m>0&&n>0)
        return Ackermann(m-1,Ackermann(m,n-1)); }
int main() {
	return 0; }