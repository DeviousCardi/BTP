#include <stdio.h>
#include <stdlib.h>
int main() {
    int ackermann(int m,int n) {
        if(m==0)
        { return (n+1); }
        else if(m>0 && n==0)
        { return ackermann(m-1,n); }
        else
        {return ackermann((m-1),(ackermann(m,n-1))); } }
	return 0; }