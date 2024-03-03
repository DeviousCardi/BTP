#include<stdio.h>
#include<strings.h>
void pri(int a[]) {
    static int i=-1;
    if (i==n-1) {
        printf("%d",a[n-1]); }
    else {
        i++;
        pri(a[]);
        printf("%d",a[i]); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    return 0; }