#include <stdio.h>
#include <stdlib.h>
long int fact(long int n) {
    if(n<=1)
    {return 1;}
    else
    {return n*fact(n-1);} }
int main()
{printf("%ld\n",fact(14));
	return 0; }
int cat(int n) {
    return (fact(2*n))/(fact(n+1)*fact(n)); }