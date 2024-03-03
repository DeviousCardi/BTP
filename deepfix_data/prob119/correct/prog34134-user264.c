#include <stdio.h>
#include <stdlib.h>
void no_m(int k){ }
int main() {
    int i,t,k[30];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    scanf("%d\n",&k[i]);
    for(i=0;i<t;i++)
     no_m(k[i]);
	return 0; }