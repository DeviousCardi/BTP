#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i;
    if (n==0){return 1;} }
int main() {
	int t,i,arr[999];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]);
	    printf("%d\n",catalan(arr[i])); }
	return 0; }