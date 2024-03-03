#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n<=0){return 1;}
    else {
        return 2*cat(n-1)*(2*n-1)/(n+1); } }
int main() {
    int j,t,i,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        for(j=0;j<10;j++) { }
             if(n<cat(j)){
                printf("%d\n",cat(j));
                break; } } }
	return 0; }