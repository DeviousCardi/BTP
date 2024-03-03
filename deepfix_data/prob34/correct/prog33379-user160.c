#include <stdio.h>
#include <stdlib.h>
int check_prime(int num);
int main() {
	int n,i,j,t;
	scanf("%d",&n);
	int a[20];
	for(j=0;j<=n-1;j++) {
	    scanf("%d\n",&a[j]); }
	scanf("%d\n",&t);
	for(j=1;j<=t;j++){
	    scanf("%d\n",&i);
	    if(a[i]>a[i+1]){printf("Yes\n");}
        else        {printf("No\n");} }
	return 0; }