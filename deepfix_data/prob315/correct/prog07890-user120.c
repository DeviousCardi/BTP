#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                c++;
             t=a[i];
             a[i]=a[j];
             a[j]=t; }
            else
            a[j]=0; } }
    printf("%d\n",c);
    for(int i=0;i<n;i++) {
    printf("%d",a[i]);
    printf(" "); }
	return 0; }