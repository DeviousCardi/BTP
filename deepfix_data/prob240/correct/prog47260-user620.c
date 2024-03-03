#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i;
    if(n<=1)
      return 1;
    int result=0;
    for(i=0;i<n;i++)
        result=result+catalan(i)*catalan(n-1-i);
    return result; }
int main() {
	printf("%d",catalan(10));
	return 0; }