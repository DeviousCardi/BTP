#include <stdio.h>
#include <stdlib.h>
int a[20];
int fibo(int n) {
    if(n<=2)
    a[n-1]=n-1;
    return n-1;
    a[n-1]=fibo(n-1)+fibo(n-2);
    return a[n-1]; }
int main() {
    int i,n,j,f=0;
    int x=fibo(20);
    scanf("%d",&n);
        for(i=0;i<20;i++)
    printf("%d ",a[i]);
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        for(j=0;j<20;j++) {
            if(a[j]==x) {
                printf("yes\n");
                f=1;
                break; } }
                    if(f==0)
            printf("no\n");;
            f=0; }
    for(i=0;i<20;i++)
    printf("%d ",a[i]);
	return 0; }