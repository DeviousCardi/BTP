#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<21) {
    int a[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&a[i]);
    if(!(a[i]>=0 && a[i]<=9))
    break; }
    int countstat=1;
    for(int i=0;i<n;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) {
            if(a[j]>a[i])
            count+=1; }
        if(count>countstat)
        countstat=count; }
    printf("%d",countstat); }
    return 0; }