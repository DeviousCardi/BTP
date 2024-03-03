#include <stdio.h>
int cat(int k){
    int i,z=0;
    if(k<=1)
        return 1;
    for(i=0;i<k;i++)
        z+=cat(i)*cat(k=i-1);
    return z; }
int main() {
	int a[17],t,k,j;
	scanf("%d ", &t);
	for(j=0;j<17;j++)
	    a[j]=cat(j);
	while(t--){
	    scanf("%d ",&k);
	    for(j=0;j<17;j++)
	        if(a[j]>=k)
	            printf("%d\n",cat(j-1)); }
	return 0; }