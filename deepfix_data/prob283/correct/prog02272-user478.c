#include <stdio.h>
#include <stdlib.h>
int acker(int m,int n){
    if(m==0)
    { return n+1;}
    if(m>0 && n==0)
    { return acker(m-1,1); }
    if(m>0 && n>0)
    { return acker(m-1,acker(m,n-1)); } }
int main() {
int c=acker(2,3);
printf("%d",c);
	return 0; }