#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[1000]={0};
    int i,j,c=0,d=0;
    for(i-0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        c=0;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[i]) {
                c++;
                d++; } }
        b[i]=c; }
    printf("%d\n",d);
    for(i=0;i<n;i++) {
        printf("%d ",b[i]); }
	return 0; }