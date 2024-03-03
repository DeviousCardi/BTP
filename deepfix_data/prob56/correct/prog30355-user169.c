#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        k=catalan(t);
        printf("%d\n",k); }
	return 0; }
int catalan(int t) {
    if(t==0)
    return 0;
    else {
        int i=0;
        if(t<catalan(i))
        return i;
        else i++; } }