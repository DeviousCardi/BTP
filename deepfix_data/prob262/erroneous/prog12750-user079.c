#include<stdio.h>
#include<strings.h>
void print_reverse(int a[],int n) {
    if(n==0)
    return;
    else {
        printf("%d",a[n-1]);
        print_reverse(a,n-1); } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    print_reverse(a,n);
    return 0; }