#include <stdio.h>
#include <stdlib.h>
int fact(n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else return n*fact(n-1); }
int catalan(n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else  return (fact(2*n)/(fact(n+1)*fact(n))); }
	return 0; }