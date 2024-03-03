#include <stdio.h>
#include <stdlib.h>
int f(int n) {
    if(n!=0&&n!=1) {
    return f(n-1)+f(n-2); }
    else if(n==1) {
        return 1; }
    else
    return 0; }
int main() {
    int t,a[100],i,m;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]);
        m=a[i];
        printf("%d\n",f(m)); }
	return 0; }