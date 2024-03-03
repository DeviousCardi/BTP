#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,r,temp;
	scanf("%d",&n);
	 if((n%2)!=0){
	 r=n/10;
	 temp=10*r+1;
	 if (temp==n) {
	     printf("YES"); }
	 else {printf("NO"); }
     else{printf("NO");} }
	return 0; }