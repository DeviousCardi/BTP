#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    if(a==0)
    return 1;
    else return (2*(2*a-1)/(a+1))*catalan(a-1); }
int main() {
int a[1000],i,t,k;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&a[i]);
for(i=0;i<t;i++) {
    k=catalan(a[i]);
    printf("%d\n",k); }
	return 0; }