#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int a;
    a=2*((2*n)-1);
    if(n==0)
    return 1;
    else
    return (a*catalan(n-1))/(n+1); }
int main() {
    int t,a[100],i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++){
    for(n=0;n<100;n++){
        if(a[i]==catalan(n))
     { printf("%d\n",catalan(n-1));
        break; }
        else if(a[i]<catalan(n))
     { printf("%d\n",catalan(n-1));
        break; } } }
	return 0; }