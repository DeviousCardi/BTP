#include <stdio.h>
int main() {
int n,i,j,count=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i!=j) {
                if(a[i]==a[j])
                count=count+1; } } }
	if(count!=0)
	printf("YES");
	else
	printf("NO");
	return 0; }