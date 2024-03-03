#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    int i,z=0;
    if(k==1)
    return 1;
    if(k==2)
    return 2;
    for(i=0;i<k;i++)
    z+=cat(i) * cat(k-1-i);
    return z; }
int main() {
	int i,t,k;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
	scanf("%d " , &k);
	cat(k);
	printf("%d\n", cat(k)); }
	return 0; }