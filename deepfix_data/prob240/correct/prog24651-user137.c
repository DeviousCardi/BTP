#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int a;
    a=(2.0*(((2.0*n)-1)/(n+1)));
    if(n==0)
    return 1;
    else
    return a*catalan(n-1); }
int main() {
    int t,a[100],i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]); }
    printf("%d",catalan(3));
	return 0; }