#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,i;
    int moves=0;
	int m(int n){
	    if(n!=0)
	        moves=2*m(n-1)+1;
	    return moves; }
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("%d\n",m(a[i])); }
	return 0; }