#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void check(int x,int n,int r);
int main() {
	int x;
	scanf("%d",&x);
	check(x,0,0);
	return 0; }
int nCr(int n,int i){
    if (n<i)return 0;
    else if (n==i)return 1;
    else if(i==0)return 1;
    else return(nCr(n-1,i)+nCr(n-1,i-1)); }
void check(int x,int n,int r){
    if(n==21){
      printf("-1");
      return; }
    for(r=0;r<=n/2;r++){
        if(nCr(n,r)==x){
            printf("%d %d",n,r);
            return ; } }
    return check(x,n+1,r); }