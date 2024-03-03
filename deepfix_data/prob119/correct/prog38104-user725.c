#include <stdio.h>
#include <stdlib.h>
long long int hanoi_(int n,long long int count){
    if(n==0) return 0;
    if(n==1){
        count++;
        return count; }
    count++;
    hanoi_(n-1,count);
    return count++; }
int main() {
	int quantity;
	scanf("%d",&quantity);
	int a[quantity];
	int i;
	for (i=0;i<quantity;i++){
	    scanf("%d",&a[i]);
	    printf("%lld\n",hanoi_(a[i],0)); }
	return 0; }