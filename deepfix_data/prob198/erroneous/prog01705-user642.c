#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,m,a[20],b[20];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d\n",&a[i]);
    scanf("%d\n",&m);
    for(i=0;i<m;i++)
        scanf("%d\n",&b[i]);
    for(i=0;i<n;i++)
    for(i=0;i<n;i++) {
        if (a[i+1]<a[i]) {
            j=a[i];
            a[i]=a[i-1];
            a[i-1]=j; } }
        for(j=0;j<m;j++) {
            if(a[i]==b[j]) a[i]=a[n]; } }
    for (i=n-1;i>=0;i--) {
        if (a[i]<a[i-1]) {
            j=a[i];
            a[i]=a[i-1];
            a[i-1]=j; } }
    if (a[0]==a[n]) printf("NO");
    else printf("%d",a[0]);
	return 0; }