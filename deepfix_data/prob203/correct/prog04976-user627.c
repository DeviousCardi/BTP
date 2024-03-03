#include <stdio.h>
int main() {
    int n,a[50],i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                c=c+1; } } }
    if(c==0) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }