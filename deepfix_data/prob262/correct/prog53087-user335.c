#include<stdio.h>
#include<strings.h>
long int count=0;
void rev(int n) {
    int c;
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