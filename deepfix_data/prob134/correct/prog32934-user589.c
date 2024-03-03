#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k){
    if(n<k)
        {return 0;}
    if(n==0 && k==0)
        {return 1;}
    if(k==0)
        {return 1;}
    else
        {int x = binomial(n-1, k) + binomial(n-1, k-1);
        return x;} }
int main() {
	int b, n, k;
	scanf("%d", &b);
	int flag = 0;
	for(n=0; n<21; n++){
	    for(k=0; k<21; k++){
	        if(binomial(n, k) == b){
	            printf("%d %d", n, k);
	            flag=1;
	            break; } }
	    if(flag==1)
	        break; }
	if(flag==0)
	    printf("-1");
	return 0; }