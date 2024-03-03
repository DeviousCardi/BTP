#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
     int start=1,c;
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    for(start=0;start<=n;start++) {
        d+=catalan(start)+catalan(n-start); }
    return d; }
int main() {
	int c=catalan(3);
	printf("%d",c);
	return 0; }