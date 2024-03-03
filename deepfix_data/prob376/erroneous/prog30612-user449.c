#include <stdio.h>
#include <stdlib.h>
int cata(int n) {
    if(n==0)
    {return 1;}
    else return (2*n)*((2*n)-1)*cata(n-1)/(n*(n+1)); }
int main() {
	int t,i,inp;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&inp);
	    int tempo=0;
	    while(cata(tempo)<inp)
        tempo++;
        printf("%d\n"cata(tempo-1)); }
	return 0; }