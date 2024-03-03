#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i
	scanf("%d",&a);
	void perfect(int n){
	    int sum=0;
	    for(i=1;i<=n/2;i++){
	        if (n%i==0){
	            sum=sum+i; } } }
	perfect(a);
	if(sum==a){printf("YES");}
	else{printf("NO");}
	return 0; }