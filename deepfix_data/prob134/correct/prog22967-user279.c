#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
        if(k==0 && n==0)
        return 1;
       else if(n<k)
        return 0;
        else if(k==0)
        return 1;
        else
        return B(n-1,k)+B(n-1,k-1); }
int main() {
	   printf("%d",B(20,9));
	return 0; }