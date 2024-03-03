#include <stdio.h>
#include <stdlib.h>
int fact (int);
int catalan (int);
int fact(int f){
    int i,ans=1;
    for(i=1;i<=f;i++){
        ans=ans*i; }
    return ans; }
int catalan (int n) {
    if(n==1){
        return 1; }
    else
    return catalan (n-1)+ (fact(2*n)/(fact (n)*fact (n)))                        +(fact(2*n-2)/(fact (n-2)*fact (n)))-
          (fact(2*n)/(fact (n+1)*fact (n-1))) -
          (fact(2*n-2)/(fact (n-1)*fact (n-1))); }
int main() {
	printf("%d",catalan(3));
	return 0; }