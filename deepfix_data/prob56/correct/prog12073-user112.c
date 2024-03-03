#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0||n==1) return 1;
    else           return (cat(n-1)*2*(2*n-1))/(n+1); }
int check_cat(int n) {
    int i;
    if(n<=0) return 1;
    else
      for(i=0;i<=17;i++) {
           if(n<cat(i))  return cat(i+1); }
    return 0; }
int main() {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        printf("%d\n",check_cat(n)); }
	return 0; }