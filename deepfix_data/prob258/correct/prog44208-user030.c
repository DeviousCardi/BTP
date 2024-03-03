#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,f,a[20];
    scanf("%d",&n);
    f=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for (j=0;j<n;j++) {
        if(j==0) {
            if(a[j]>a[j+1]) {
                f=1; } }
        else if(j==(n-1)) {
            if(a[j-1]>a[j-2]) {
                f=1; } }
        else {
            if(a[j]>a[j-1] && a[j]>a[j+1]) {
                f=1; } } }
    if(f==1) {
        printf("Yes"); }
    else {
        printf("No"); }
	return 0; }