#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[n1]); }
    scanf("%d",&n2);
    for(j=0;j<n2;j++) {
        scanf("%d",&b[n2]); }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a[i]!=b[j])
            printf("%d",a[i]);
            break; } }
	return 0; }