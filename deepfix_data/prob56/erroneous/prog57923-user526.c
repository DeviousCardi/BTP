#include <stdio.h>
#include <stdlib.h>
int catalan(int k,int j,int l) {
    if(k>l)
    return k;
    else {
    k=k*(2*((2*j)+1))/(j+2);
    j++;
    catalan(k,j,l) } }
int main() {
    int t,i,j;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(i=0;i<t;i++) {
        j=catalan(1,1,a[i]);
        printf("%d\n",j); }
	return 0; }