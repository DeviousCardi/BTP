#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;(i<n);i++) {
        scanf("%d",&a[i]);
        if(i==0) {
            if(a[0]<a[1])
                printf("Yes1"); }
        else if(i==n-1) {
            if(a[i]>a[i-1])
                printf("Yes2"); }
        else {
            if((a[i]>a[i-1])&&(a[i]>a[i+1]))
                printf("Yes3"); } }
    if(flag==1)
        printf("Yes");
    else
        printf("No\n");
     for(i=0;(i<n);i++) {
        printf("%d\n",a[i]); }
	return 0; }