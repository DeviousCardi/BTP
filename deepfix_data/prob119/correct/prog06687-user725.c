#include <stdio.h>
#include <stdlib.h>
int count =0;
int hanoi_(int n,int a,int b,int c){
    if(n==1){
        count++;
        return count; }
    hanoi_(n-1,a,c,b);
    count++;
    return count; }
int main() {
	int quantity;
	scanf("%d",&quantity);
	int a[quantity];
	int i;
	for (i=0;i<quantity;i++){
	    scanf("%d",a[i]);
	    printf("%d",hanoi_(a[i],1,2,3)); }
	return 0; }