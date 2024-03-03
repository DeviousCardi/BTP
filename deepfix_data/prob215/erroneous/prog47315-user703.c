#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum=0;
	scanf("%d",&n);
	int divisors[n];
	for(i=1,i<n;i++){
	    if(n%i==0){divisors[i]=1;} }
      for(i=1;i<n;i++){
          if(divisors[i]==1){sum = sum + i;} }
	if(sum==n){printf("YES");}
	esle{printf("NO");}
	return 0; }