#include <stdio.h>
#include <stdlib.h>
int get(a) {
    if(a==0)
    return 1;
    if(a==1)
    return 1;
    int ans=0;
    int i;
    for(i=0; i<a; i++)
    ans+=get(i)*get(a-i-1);
    return ans; }
int catalan(int a) {
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    return catalan(a-1)+get(a-1); }
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
	    int k;
	    scanf("%d", &k);
	    printf("%d\n", catalan(k)); }
	return 0; }