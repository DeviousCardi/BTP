#include <stdio.h>
#include <stdlib.h>
int recbin(int n, int k){
	if(n!= 0 && k== 0)
		return 1;
	else if(n== 0 && k!= 0)
		return 0;
	else
		return recbin(n-1,k-1) + recbin(n-1,k); }
int main() {
    int b;
    int n=0,k=1;
    scanf("%d",&b);
    printf("%d",recbin(n,k));
	return 0; }