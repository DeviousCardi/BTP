#include <stdio.h>
#include <stdlib.h>
int series(int k) {
    static int j=1;
    if(k>1) {
        j=2*j;
        k--;
        series(k); }
    else
    return j; }
int main() {
    int t,i,j;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(i=0;i<t;i++) {
        j=series(a[i]);
        printf("%d\n",j-1); }
	return 0; }