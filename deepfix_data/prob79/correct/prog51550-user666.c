#include <stdio.h>
#include <stdlib.h>
int main() {
    long n,i,S,dump;S=0;
    scanf("%ld",&n);
    int a[n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);S=S+a[i];}
    i=-1;dump=0;
    while(1) {
        i++;dump=dump+a[i];
        if(dump>=S/2){break;} }
    i++;
    printf("%ld %ld",i,n-1);
	return 0; }