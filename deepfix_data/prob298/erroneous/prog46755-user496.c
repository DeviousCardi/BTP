#include <stdio.h>
#include <stdlib.h>
int catalan(n) {
    if(n==1)
        return ;
    else
        2*catalan(n-1); }
printf("%d",catalan(2));
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
	int array[17];
	int i,j,t,k;
	int t[1000];
	for(i=0;i<17;i++)
	    array[i]=catalan[i+1];
	scanf("%d\n",&t);
	for(j=0;j<t;j++)
	    scanf("%d",&t[j]);
	for(k=0;k<t;k++) {
	    if(checking_catalan(array[k])==1)
	        printf("Yes");
	    else
	        printf("No"); }
	return 0; }