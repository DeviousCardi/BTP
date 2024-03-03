#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,x;int j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x);if(x<=0){printf("1");}
        else{while(x>cat(j)) {
            j++;
        }printf("%d\n",cat(j));} }
	return 0; }
int cat(int n) {
    return fact(2*n)/(fact(n+1)*fact(n)); }
int fact(int n) {
    if(n<=1)
    {return n;}
    else
    {return n*fact(n-1);} }