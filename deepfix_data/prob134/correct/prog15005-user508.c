#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k){
    if(n<k)return 0;
    if((n==0)&&(k==0))return 1;
    if(k==0)return 1;
    return bin(n-1,k)+bin(n-1,k-1); }
int main() {
	int a,n,k;
	scanf("%d",&a);
	for(n=0;n<=20;n++)
	for(k=0;k<=20;k++)
	if(bin(n,k)==a){printf("%d %d",n,k);break;}
	return 0; }