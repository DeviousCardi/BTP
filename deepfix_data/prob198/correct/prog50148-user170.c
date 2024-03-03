#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,tmp;
    scanf("%d\n",&n);
    int c[n],a[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    int b[m];
    for(i=0;i<m;i++) {
        scanf("%d\n",&b[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i]==b[j]) {
                c[i]=a[i]; } } }
    for(i=0;i<n;i++) {
        if(c[i]<c[i+1])
        {  tmp=c[i];
            c[i]=c[i+1];
            c[i+1]=tmp; } }
    printf("%d",c[n-1]);
	return 0; }