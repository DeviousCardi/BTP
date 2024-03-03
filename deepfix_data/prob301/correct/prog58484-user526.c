#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,max=0,count=0,c1=0,c2=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n==1)
    printf("%d",a[0]);
    else {
    for(i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            count++; }
        else {
            if(count>=max) {
                    max=count;
                    c1=a[i]; } }
            count=0; }
    printf("\n");
    printf("%d",c1); }
	return 0; }