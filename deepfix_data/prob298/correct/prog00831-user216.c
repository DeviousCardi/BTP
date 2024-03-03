#include <stdio.h>
#include <stdlib.h>
long int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1); }
long int cat(int n,int k){
 return     (k==(fact(2*n))/ (float)(fact(n)*fact(n+1))); }
void check(int k) {
    int y=0;
    int i;
    for(i=1;i<=17;i++){
       if (cat(i,k)){ printf("yes\n"); y=1; break;} }
    if(y==0) printf("no\n");
    return ; }
int main() {
int t,k,i;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d",&k);
    check(k); }
	return 0; }