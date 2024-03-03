#include <stdio.h>
#include <stdlib.h>
long long int count =0;
long long int hanoi_(int n,int a,int b,int c){
    if(n==0) return 0;
    if(n==1){
        count++;
        return count; }
    count++;
    return hanoi_(n-1,a,c,b);
    return count++; }
int main() {
	int quantity;
	scanf("%d",&quantity);
	int a[quantity];
	int i;
	for (i=0;i<quantity;i++){
	    scanf("%d",&a[i]);
	    printf("%lld\n",hanoi_(a[i],1,2,3)); }
	return 0; }