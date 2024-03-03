#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==1)
        return 1;
    int i=0,c=0;
    for(i=1;i<=n;++i) {
            c=c+((catalan(i))*(catalan(n-i))); }
    return c; }
int main() {
    int num;
    scanf("%d",&num);
    int i=1;
    while() {
            if(catalan(i+1)>num) {
                    printf("%d",catalan(i));
                    break; }
            ++i; }
	return 0; }