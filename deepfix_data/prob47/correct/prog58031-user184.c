#include <stdio.h>
#include <stdlib.h>
int get(a) {
    if(a==0)
    return 1;
    if(a==1)
    return 1;
    return get(a-1)*2; }
int catalan(int a) {
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    return catalan(a-1)+get(a); }
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
	    int k;
	    scanf("%d", &k);
	    printf("%d\n", catalan(k)); }
	return 0; }