#include <stdio.h>
#include <stdlib.h>
int term(int k,int a,int b) {
    int i=2,n;
    n=a+b;
    i++;
    if(i==k)
    return n;
    return term(k,b,n); }
int main(){
    int t,i,k,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        a=0;b=1;
        if(k==1)
        printf("%d",a);
        if(k==1)
        printf("%d",b);
        if(k>2)
        printf("%d",term(k,a,b)); }
	return 0; }