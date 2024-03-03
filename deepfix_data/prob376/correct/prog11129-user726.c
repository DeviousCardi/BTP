#include <stdio.h>
#include <stdlib.h>
int sum=0;
int n_term(int n) {
    int i, m=1;
    if(n==0)
        return 0;
    for(i=2*n;i>n+1;i++) {
        m*=i; }
    return m; }
int cat(int n , int i) {
    if(n==i)
        return 0;
    if (i==0)
        i=-1;
    i++;
    sum+=n_term(i)*n_term(n-i);
    return sum+cat(n,i); }
int main() {
	int t, k, i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
	    scanf("%d\n", &k);
	    printf("%d\n", cat(k , k)); }
	return 0; }