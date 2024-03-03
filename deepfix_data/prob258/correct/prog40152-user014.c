#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;(i<n);i++) {
        scanf("%d",&a[i]);
        if((i=0)||(i=n-1)) {
            if((a[i]>a[i-1])||(a[i]>a[i+1]))
                flag=1; }
        else {
            if((a[i]>a[i-1])&&(a[i]>a[i+1]))
                flag=1; } }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
	return 0; }