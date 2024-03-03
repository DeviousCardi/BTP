#include <stdio.h>
#include <stdlib.h>
int combination(int n , int r) {
    if(n<r) {
        return 0; }
    else if(r==0 || r==n) {
        return 1; }
    else {
        return combination(n-1 , r)+combination(n-1 , r-1); } }
int catalan_numbers( int n) {
    int sum=0,i,C;
    if(n==0) {
        return 1; }
    if(n>0) {
        for(i=0;i<n;i++) {
            C=combination(n , i)*combination(n , n-i);
            sum=sum+C; } }
    return sum; }
int main() {
	int t,n,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    int C=catalan_numbers(n);
	    printf("%d\n",C); }
	return 0; }