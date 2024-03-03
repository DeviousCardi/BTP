#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,a[20],c=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(i==0) {
            if(a[i]<a[i+1]) {
               c++;
               break; } }
        else if(i==n) {
            if(a[i]<a[i-1]) {
               c++;
               break; } }
        else if(a[i]<a[i+1]&&a[i]<a[i-1]) {
               c++;
               break; } }
    if(c==1)
    printf("Yes");
    else
    printf("No");
	return 0; }