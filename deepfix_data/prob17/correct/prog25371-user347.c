#include <stdio.h>
int main() {
int n1,n2,i,j,c,k,l;
scanf("%d %d",&n1,&n2);
int a[n1],b[n2];
for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
for(j=0;j<n2;j++)
    scanf("%d",&b[i]);
for(l=0;l<n2-n1;l++) {
    for(k=l;k<n2-n1+l;k++) {
    if(a[k]==b[k])
    c=c+1; }
    if(c==n2-n1) {
        printf("YES");
        break; } }
    printf("NO");
	return 0; }