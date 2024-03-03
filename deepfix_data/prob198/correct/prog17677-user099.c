#include <stdio.h>
#include <stdlib.h>
void bsort(int a[],int n) {
    int i=0,j=0,temp;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n;j++) {
            if(a[j]<a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
    return; }
int main() {
    int n1,n2,i=0,j=0;
    scanf("%d\n",&n1);
    int a1[n1];
    for(i=0;i<n1;i++) scanf("%d\n",&a1[i]);
    scanf("%d\n",&n2);
    int a2[n2];
    for(i=0;i<n2;i++) scanf("%d\n",&a2[i]);
    bsort(a2,n2);
    for(int k=0;k<n2;k++) printf("%d ",a2[k]);
	return 0; }