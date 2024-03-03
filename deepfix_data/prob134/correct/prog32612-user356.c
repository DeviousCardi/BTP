#include <stdio.h>
#include <stdlib.h>
int b(int n,int k){
    if(n<k){
        return 0;}
        else if((n==0)&&(k==0))
        {return 1;}
        else if(k==0)
        {return 1;}
        else
        return b(n-1,k)+b(n-1,k-1); }
int main() {
	int p,n,k;
	scanf("%d",&p);
	if(p==b(n,k)) {
	    printf("%d %d",n,k); }
	else
	printf("-1");
	return 0; }