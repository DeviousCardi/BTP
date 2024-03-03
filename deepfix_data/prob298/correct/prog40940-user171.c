#include <stdio.h>
#include <stdlib.h>
int i=-1;
int catalan(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        return catalan(n-1)*catalan(i-n); }
int main() {
    int f=1,k;
    scanf("%d",&k);
    while(2) {
            if(k==catalan(i)) {
                    f=0;
                    break; }
            i++; }
    if(f==0)
        printf("yes");
    else
        printf("no");
	return 0; }