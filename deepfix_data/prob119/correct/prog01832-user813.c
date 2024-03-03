#include <stdio.h>
#include <stdlib.h>
int pwer(int k)
{    int power=1,i;
    for(i=0;i<k;i++) {
        power=power*2; }
    return power; }
int main() {
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&m);
	    printf("%d",pwer(m)-1); }
	return 0; }