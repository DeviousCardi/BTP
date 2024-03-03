#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int i,x,n,sum=0;
    scanf("%lld",&n);
         for(i=0;i<n;i++){
             if(n%i==0){
                 x=i;
                 sum=sum+x;
             }else
                continue; }
        if(sum==n){
            printf("Yes");
        }else{
            printf("No"); }
	return 0; }