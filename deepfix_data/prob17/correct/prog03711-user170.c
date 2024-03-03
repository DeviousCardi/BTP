#include <stdio.h>
int main() {
    int i,j,k=1,d=0,n,m;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    scanf("%d\n",&m);
    int b[m];
    for(i=0;i<m;i++) {
        scanf("%d ",&b[i]); }
    for(j=0;j<n;j++) {
    if(b[0]!=a[j]) {
        k++; }
    else
    break; }
printf("%d",k);
j=k-1;
for(i=0;i<m;i++) {
    if(a[j+i]!=b[i]) {
        d=1; } }
if(d==0) {
    printf("yes"); }
else
printf("no");
	return 0; }