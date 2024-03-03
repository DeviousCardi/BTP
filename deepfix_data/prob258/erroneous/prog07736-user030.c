#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,c,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&x);
        if(c==0) {
            if(a[c]>a[c+1]) {
                printf("Yes"); }
            else {
                printf("No"); } }
        else if(c==(n-1)) {
           if(a[c]>a[c-1]) {
                printf("Yes"); }
            else {
                printf("No"); } }
        else {
            if((a[c]>a[c-1])&&(a[c]>a[c+1])) {
                printf("Yes"); }
            else {
               printf("No"); } }
        printf("\n"); }
	return 0; }