#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&t);
     j=0;
    while(j<t) {
        scanf("%d",&i);
        if(n==1&&t>0) {
            printf("Yes"); }
        else if(n>1) {
            if(i>=1&&i<n) {
                if(a[i]>a[i-1]&&a[i]>a[i+1]) {
                    printf("Yes"); }
                else {
                    printf("No"); } }
            else if (i==0) {
                if(a[0]>a[1]) {
                    printf("Yes"); }
                else {
                    printf("No"); } }
            else if(i==n-1) {
                if(a[i]>a[i-1]) {
                    printf("Yes"); }
                else {
                    printf("No"); } } }
        printf("\n");
        j=j+1; }
	return 0; }