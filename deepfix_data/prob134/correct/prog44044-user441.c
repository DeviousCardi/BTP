#include <stdio.h>
#include <stdlib.h>
    int B(int n,int k){
         if (n<k) return 0;
         if (n==0&&k==0) return 1;
         if(k==0) return 1;
        else return  B(n-1,k)+B(n-1,k-1); }
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int c=B(n,k);
	printf("%d",c);
	return 0; }