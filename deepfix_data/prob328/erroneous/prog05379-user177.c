#include <stdio.h>
#include <stdlib.h>
int fibo(int a[],int n) {
    if(n<=2)
    a[n-1]=n-1;
    return n;
    a[n-1]=fibo(a,n-1)+fibo(a,n-2);
    return a[n-1]; }
int main() {
    int f[20],i,n,j,f=0;
    int x=fibo(f,20);
    scanf("%d"&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        for(j=0;j<20;j++) {
            if(a[j]==x) {
                printf("yes\n");
                f=1;
                break; }
            if(f==0)
            printf("no");;
            f=0; } }
	return 0; }