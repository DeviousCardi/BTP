#include <stdio.h>
#include <stdlib.h>
int catalan(int a,int k){
    if(a==0)
    return 1;
    else if(a==1)
    return 1;
    else{
        return catalan(((a+k)/k)*k,k+1); } }
int main() {
int a[1000],i,t,k;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",a[i]);
for(i=0;i<t;i++) {
    k=catalan(a[i],2);
    printf("%d\n",k); }
	return 0; }