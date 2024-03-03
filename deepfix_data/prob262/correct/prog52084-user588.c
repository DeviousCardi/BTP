#include<stdio.h>
#include<strings.h>
void pri(int a[],int n) {
    static int i=10000;
    static int j=-1;
    if (j<n-1) {
        j++;
        pri(a,n);
        i--;
        printf("%d ",a[i]); }
    else
    return; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    pri(a,n);
    return 0; }