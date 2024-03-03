#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,x,t,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d",&t);
    for(j=0;j<t;j++) {
        scanf("%d",&x);
        if(x=0) {
            if(a[x]>a[x+1]) {
                printf("Yes"); }
            else {
                printf("No"); } }
        else if(x=(n-1)) {
           if(a[x]>a[x-1]) {
                printf("Yes"); }
            else {
                printf("No"); } }
        else {
            if((a[x]>a[x-1])&&(a[x]>a[x+1])) {
                printf("Yes"); }
            else {
               printf("No"); } }
        printf("\n"); }
	return 0; }