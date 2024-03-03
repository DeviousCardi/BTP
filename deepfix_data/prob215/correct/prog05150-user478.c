#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int i,x=0,n,sum=0;
    scanf("%lld",&n);
         for(i=0;i<n;i++){
             if(n%i==0){
                 x=i;
                 sum=sum+x;
                 x++;
             }else
                break; }
         printf("%lld",sum);
	return 0; }