#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
     for
    (i=1;i<n;i=i+1) {
        if((a[i]<a[i+1])&&(a[i]<a[i-1]))
        {printf("Yes");
            break;} }
	return 0; }