#include <stdio.h>
#include <stdlib.h>
int bio(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return bio(n-1,k)+bio(n-1,k-1); }
int main() {
    int b,n,k,f,f1,f2;
    scanf("%d",&b);
    for(k=0;k<=20;k++) {
        for(n=0;n<=20;n++) {
            if(bio(n,k)==b) {
                printf("%d %d",n,k);
                break; }
            else
            f=1; }
        if(f!=1)
        break; }
    if(f==1)
    printf("-1");
	return 0; }