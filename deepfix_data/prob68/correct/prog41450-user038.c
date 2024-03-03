#include<stdio.h>
long int prod(int s[],int size) {
    if(size==1) {
        return s[size-1]; }
    else {
        return (s[size-1])*(prod(s,size-1)); } }
int main() {
    int n;
    long int a;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    a=prod(s,n);
    printf("%ld",a);
    return 0; }