#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char b,char c){
    if(n==0) {
        return 0; }
    if(n==1) {
        return 1;; }
    return (hanoi(n-1,a,c,b)+hanoi(n-1,c,b,a)+1); }
int main() {
	int t,i,a[20];
	char A,B,C;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("\n%d",&a[i]); }
	int j,k;
	for(j=0;j<t;j++) {
        k=hanoi(a[j],'A','B','C');
        printf("%d\n",k); }
	return 0; }