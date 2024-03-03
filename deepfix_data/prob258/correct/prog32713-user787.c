#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20];
    int n,i,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    for(j=0;j<n;j++){
        if(a[j]>a[j-1] && a[j]>a[j+1])
        break; }
    printf("Yes");
	return 0; }