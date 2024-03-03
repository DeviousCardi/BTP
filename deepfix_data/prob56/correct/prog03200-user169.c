#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int n,int t);
    int n,i,t,k,j=100;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        k=catalan(j,t);
        printf("%d\n",k); }
	return 0; }
int catalan(int s,int t) {
    if(t==0)
    return 1;
    else {
        int i;
        for(i=0;i<s;i++) {
            if(catalan(i,t)>t)
            break; }
    return i; } }