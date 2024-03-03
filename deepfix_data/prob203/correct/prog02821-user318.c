#include <stdio.h>
int main() {
int n,i,j,k,c=0;
scanf("%d",&n);
int z[n];
for(j=0;j<n;j++) {
    scanf("%d",&z[j]); }
for(i=0;i<n;i++) {
   for(j=0;j<n;j++) {
       if(z[i]==z[j])c=c+1; } }
if(c==n)printf("YES");
else printf("NO");
	return 0; }