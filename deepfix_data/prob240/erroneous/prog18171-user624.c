#include <stdio.h>
int cat(int k){
    int i,z=0;
    if(k<=1)
        return 1;
    for(i=0;i<k;i++)
        z+=cat(i)*cat(n-i-1);
    return z; }
int main() {
	int t,k;
	scanf("%d ", &t);
	while(t--){
	    scanf("%d ",&k);
	    for(j=0;j<15;j++)
	        if(cat(j)>k)
	            printf("%d\n",&cat(j-1)); }
	return 0; }