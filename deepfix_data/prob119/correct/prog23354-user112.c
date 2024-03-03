#include <stdio.h>
#include <stdlib.h>
long int tower(int n) {
    if(n==1)  return 1;
    else      return (2*tower(n-1))+1; }
int main() {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        printf("%ld\n",tower(n)); }
	return 0; }