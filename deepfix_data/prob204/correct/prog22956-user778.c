#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,count=0,a[100],i,t=0;
    scanf("%d",&N);
    while(N!=0) {
        a[count]=N%10;
        N=N/10;
        count++; }
    for(i=0;i<count;i++) {
        if(a[i]!=a[count-i-1]) {
            printf("NO");
            t=1;
            break; } }
    if(t==0)
    printf("YES");
	return 0; }