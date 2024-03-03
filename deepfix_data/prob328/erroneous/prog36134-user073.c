#include <stdio.h>
#include <stdlib.h>
int Fibo_series(int n);
int Fibo_search(int n);
int main() {
	int t;
	scanf("%d",&t);
	int A[t],i;
	for(i=0;i<t;i++) {
	    scanf("%d",&A[i]); }
	for (i=0;i<t;i++) {
	    if(Fibo_search(A[i]))
	    printf("yes");
	    else
	    printf("no"); }
	return 0; }
int Fibo_series(int n) {
    if(n<1)
        return -1;
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return Fibo_series(n-2) + Fibo_series(n-1); }
int Fibo_search(int k) {
    if(k == 0 || k == 1)
    return 1;
    else if(k<0)
    return 0;
    else return(Fibo_search(Fibo_series(k-1)); }