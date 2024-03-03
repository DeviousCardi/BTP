#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,count=0;
    if (n<=1){return 1;}
    if(n>1){for(i=0;i<=n-1;i++){
        count=count+catalan(i)*catalan(n-1-i); }
    return count;} }
int main() {
	int t,i,arr[999];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]);
	    printf("%d\n",catalan(arr[i])); }
	return 0; }