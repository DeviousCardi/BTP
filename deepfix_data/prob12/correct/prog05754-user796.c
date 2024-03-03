#include <stdio.h>
int main() {
    int n;int i,j,min = 300;
    scanf("%d",&n);
    int a[200];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=2*n-1;j>=0;j-- ) {
            if(a[i]==a[j]) {
                if(i>j) {
                    if((i-j)<min) {
                        min=i-j; } }
                if(i<j) {
                    if((j-i)<min) {
                        min=j-i; } }
                if(i=j){if((j-i)<min){
                    min=j-i;}} } } }
    printf("%d",min);
    return 0; }