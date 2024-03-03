#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],i,n,mode,temp=1,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    mode=a[1];
    for(i=1;i<n;i++) {
        if(a[i]==a[i-1])
        c++;
        else {
            if(temp<=c) {
                mode=a[i-1];
                temp=c; }
            c=1; } }
    printf("%d",mode)
	return 0; }