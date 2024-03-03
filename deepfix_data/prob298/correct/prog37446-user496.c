#include <stdio.h>
#include <stdlib.h>
int catalan(n) {
    if(n==1)
        return 1;
    else
        return 2*catalan(n-1); }
int checking_catalan(int x) {
    int p,sum=0;
    for(p=1;p<=17;p++)
        if(x==catalan(p))
            sum++;
    if(sum==0)
        return 0;
    else
        return 1; }
int main() {
	int j,t,k;
	int test[1000];
	scanf("%d\n",&t);
	for(j=0;j<t;j++)
	    scanf("%d",&test[j]);
	for(k=0;k<t;k++) {
	    if(checking_catalan(test[k])==1)
	        printf("Yes");
	    else
	        printf("No"); }
	return 0; }