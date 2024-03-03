#include <stdio.h>
#include <stdlib.h>
int binomial(int a,int b){
    if (a<b)
    return 0;
    else
    if (a==0&&b==0)
    return 1;
    else
    if (b==0)
    return 1;
    else
    return (binomial(a-1,b)+binomial(a-1,b-1)); }
int main() {
	return 0; }