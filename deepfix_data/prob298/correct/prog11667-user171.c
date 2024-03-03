#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
        int sum=0,i;
        if(n==0)    return 1;
        for(i=0;i<n;i++)
            sum+=catalan(n-1)*catalan(i);
        return sum; }
int main() {
    int f=1,k,t,i;
    scanf("%d",&t);
    while(t--) {
            scanf("%d",&k);
            while(2) {
                    if(k==catalan(i) || k<catalan(i)) {
                            f=0;
                            break; }
                    i++; }
    if(f==0)
        printf("yes");
    else
        printf("no"); }
	return 0; }