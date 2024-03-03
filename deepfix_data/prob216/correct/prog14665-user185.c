#include <stdio.h>
#include <stdlib.h>
int fibonachi(int n){
    int k=fibonachi(n-1)+n-1;
    return k; }
int main() {
    int t,ar[t],i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&ar[i]);
        ar[i]=fibonachi(ar[i]);
        printf("%d\n",ar[i]); }
	return 0; }