#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else
    return 2*(((2*n)+1)/(n+2))*catalan(n); }
int main() {
    int t,a[100],i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]); }
    printf("%d",catalan(1));
	return 0; }