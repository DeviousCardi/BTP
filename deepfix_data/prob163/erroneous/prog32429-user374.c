#include <stdio.h>
#include <stdlib.h>
int sum(int,int,int);
int max(int,int);
int extr(int,int,int);
int main() {
	int p,q,t,extra=0;
	scanf("%d\n",&p);
	scanf("%d\n",&q);
	int arr1[p];
	int arr2[q];
	int arr3[max(p,q)+1];
	for(t=1;t<=max(p,q);t++) {
	    arr3[max(p,q)-t+1]=sum(arr1[p-t],arr2[q-t],extra);
	    extra=extr(arr1[p-t],arr2[q-t],extra]); }
	return 0; }
int max(int x,int y){
    if(x>y)
    return x;
    else
    return y; }
int sum(int a,int b,int c){
    int total;
    total=a+b+c;
    c=total/10;
    return total%10; }
int extr(int a,int b,int c){
    int total;
    total=a+b+c;
    c=total/10;
    return c; }