#include <stdio.h>
#include <stdlib.h>
int count =0;
int hanoi_(int n,int a,int b,int c){
    count =0;
    if(n==0) return 0;
    if(n==1){
        count++;
        return count; }
    hanoi_(n-1,a,c,b);
    printf("%d\n",count);
    count++;
    return count; }
int main() {
	int quantity;
	scanf("%d",&quantity);
	int a[quantity];
	int i;
	for (i=0;i<quantity;i++){
	    scanf("%d",&a[i]);
	    printf("%d\n",hanoi_(a[i],1,2,3)); }
	return 0; }