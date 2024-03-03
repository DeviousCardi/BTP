#include <stdio.h>
#include <stdlib.h>
int catalan(int a,int k,int n){
    if(a==0)
    return 1;
    else if(a==1)
    return 1;
    else if (k==a)
    return n;
    else{ printf("%d\n",n)
        return catalan(a,k+1,((a+k)/k)*n); } }
int main() {
int a[1000],i,t,k;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&a[i]);
for(i=0;i<t;i++) {
    k=catalan(a[i],2,1);
    printf("%d\n",k); }
	return 0; }