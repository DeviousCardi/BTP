#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int count;
    if (n==0){return 1;}
    if(n==1){return 1;}
    if(n>0){count=3*catalan(n-1)-1;}
    return count;}
int main() {
	int t,i,arr[999];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]);
	    printf("%d\n",catalan(arr[i])); }
	return 0; }