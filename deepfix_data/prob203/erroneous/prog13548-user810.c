#include <stdio.h>
int main() {
int n,a[50],s=0,i,j;
scanf("%d",&n);
for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
                if(a[i]==a[j]) {
                    printf("YES");
                    break; }
                else
                s++; }
        if(a[i]==a[j])
        break; }
for(j=1;j<=n-1;j++)
    {int m=0;
       m=m+(n-j); }
if(s==m) {
        printf("NO"); }
	return 0; }