#include<stdio.h>
#include<strings.h>
void rev() {
    int c,count=0;
    while(count<n) {
        scanf("%d",&c);
        count=count+1;
        rev(n);
        printf("%d ",c); } }
int main() {
    long int n;
    scanf("%ld",&n);
    rev(n);
    return 0; }