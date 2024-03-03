#include <stdio.h>
#include <stdlib.h>
int Acker(int m, int n) {
        if(m==0)
        return n+1;
        else if(m>0 && n==0)
        return Acker(m-1,1);
        else return(Acker(m-1,Acker(m,n-1))); }
int main() {
	int k,i,j
	scanf("%d", &k);
	for(i=0;i<=3;i++); {
	        for(j=0;j<=5;j++); { } }
	return 0; }