#include<stdio.h>
#include<strings.h>
void rev(n) {
    int c=0;
    while(c<n) {
        scanf("%d",&c);
        rev(n-1);
        printf("%d ",c); } }
int main() {
    int long n;
    scanf("%ld",&n);
    rev(n);
    return 0; }