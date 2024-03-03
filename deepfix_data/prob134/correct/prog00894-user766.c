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
    for(n=0;n<=20;n++) {
        for(k=0;k<=20;k++) {
            if(bio(n,k)==b) {
                f=1;
                f1=n;
                f2=k;
                break; }
            else
            printf("-1"); } }
    if(f==1)
    printf("%d %d",f1,f2);
	return 0; }