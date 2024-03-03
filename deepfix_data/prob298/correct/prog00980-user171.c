#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
        int sum=0,i;
        if(n==0)    return 1;
        for(i=0;i<n;i++)
            sum+=catalan(n-1)*catalan(i);
        return sum; }
int main() {
    int k,t,f,i;
    scanf("%d",&t);
    while(t--)
        {   f=1;
            i=0;
            scanf("%d",&k);
            while(k>=catalan(i)) {
                    if(k==catalan(i)) {
                            f=0;
                            break; }
                    i++; }
    if(f==0)
        printf("yes\n");
    else
        printf("no\n"); }
	return 0; }