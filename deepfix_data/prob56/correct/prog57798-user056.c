#include <stdio.h>
#include <stdlib.h>
int cata(int n) {
    if (n==0)
    return 1;
    int i,h=0;
    for(i=0;i<n;i++) {
        h=h+cata(i)*cata(n-i-1); }
    return h; }
int main() {
    int a,n,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
        scanf("%d\n",&n);
        for(j=0;j<50;j++) {
            if ((cata(j))>n) {
                printf("%d\n",cata(j));
                break; } }
        return 0; }
	return 0; }