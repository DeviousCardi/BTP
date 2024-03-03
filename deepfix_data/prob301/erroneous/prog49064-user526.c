#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,max=0,count=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        if(a[i]==a[i+1])
        count++;
        else {
            if(count>max)
            max=count;
            count=0; } }
    printf("\n")
    printf("%d",max+1);
	return 0; }