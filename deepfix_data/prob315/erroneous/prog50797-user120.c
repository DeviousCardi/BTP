#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,c=0,p=0,g,r;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%d\n",c);
    for(int i=0;i<n;i++) {
        g=gh(r);
    if(c!=0) {
        printf("%d",g);
    printf(" "); } }
	return 0; }
int gh() {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                c++;
                p++;
             t=a[i];
             a[i]=a[j];
             a[j]=t; }
        } return p; } }