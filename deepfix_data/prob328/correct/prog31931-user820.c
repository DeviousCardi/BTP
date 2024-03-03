#include <stdio.h>
#include <stdlib.h>
int f(int k) {
    if(k==0)
    return 0;
    if(k==1)
    return 1;
    else
    return (f(k-1)+f(k-2)); }
int main() {
    int t,k,i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++) {
        scanf("%d",&k);
        for(i=0;i<20;i++) {
            if(k==f(i)) {
                printf("yes");
                break; }
            if(k>f(i))
            continue;
            else {
                printf("no");
                break; } } }
	return 0; }