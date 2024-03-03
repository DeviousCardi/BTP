#include <stdio.h>
#include <stdlib.h>
int catalan(int k,int n) {
    if(k>n)
        return -1;
    else if(n<=1)
        return 1;
    else
        return ((n+k)/k)*catalan(k+1,n); }
int main() {
    int i,j,t,k,f=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i=i+1) {
	    scanf("%d\n",&k);
	    for(j=0;j<999999;j=j+1) {
	                if(catalan(0,j)<=k)
                        continue;
                    else {
                            f=j+1;
                            break; } }
        if(f!=0) {
                printf("%d",catalan(0,f)); } }
	return 0; }