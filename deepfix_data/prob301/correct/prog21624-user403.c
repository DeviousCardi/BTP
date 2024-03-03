#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,j,t=0,a[10000];
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]); }
for(i=1;i<=n;i++) {
        for (j=i+1;j<=n;j++) {
            if (a[i]==a[j]) {
            printf("%d",a[i]); } } }
	return 0; }