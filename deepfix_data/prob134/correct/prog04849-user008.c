#include <stdio.h>
#include <stdlib.h>
int B(int i,int j) {
    if(i<j)
    return 0;
    if(i==0&&j==0)
    return 1;
    if(j==0)
    return 1;
    return B(i-1,j)+B(i-1,j-i); }
int main() {
    printf("%d",B(2,1));
	return 0; }