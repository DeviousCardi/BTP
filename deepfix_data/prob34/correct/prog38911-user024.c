#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20],i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
    scanf("%d", &a[i]); }
    for(i=1;i<(n-1);i++) {
            if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
             printf("Yes");
         break; } }
         if(i==(n-1))
         printf("No");
	return 0; }