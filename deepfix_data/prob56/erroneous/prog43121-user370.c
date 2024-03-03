#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0||n==1)
        return 1;
    else
        return (4*n-2)*catalan(n-1)/(n+1); }
int main() {
    int i,j,t,k,f=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i=i+1) {
	    scanf("%d\n",&k);
	    for(j=0;j<999999;j=j+1) {
	                if(catalan(j)<=k)
                        continue;
                    else {
                            f=j;
                            printf("%d",f)
                            break; } }
        if(f!=0) {
                printf("%d\n",catalan(f)); } }
	return 0; }