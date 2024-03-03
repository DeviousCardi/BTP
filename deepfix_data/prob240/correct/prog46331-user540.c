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
	int i,j,t,a[100],b[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<10;i++){
	    b[i]=catalan(i); }
 printf("ff");
	return 0; }