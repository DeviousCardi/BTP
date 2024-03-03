#include<stdio.h>
#include<strings.h>
void reverse(int x[],int n);
int main() {
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    reverse(num,n);
    return 0; }
void reverse(int x[],int n) {
    int i=n-1;
    printf("%d ",x[i]);
    reverse(x,n-1); }