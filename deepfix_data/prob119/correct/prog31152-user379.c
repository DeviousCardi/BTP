#include <stdio.h>
#include <stdlib.h>
int term(int x) {
    if(x==1)
    return 1;
    else if(x==0)
    return 0;
    else return(2*term(x-1)+1); }
int main() {
	int i,t,a[1000],k;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&a[i]);
for(i=0;i<t;i++) {
    k=term(a[i]);
    printf("%d\n",k); }
	return 0; }