#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<21) {
    int a[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    int countstat=1;
    for(int i=0;i<n;i++) {
        int count=1;
        int p=a[i];
        for(int j=i+1;j<n;j++) {
            if(a[j]>p) {
            count+=1;
            p=a[j]; } }
        if(count>countstat)
        countstat=count; }
    printf("%d",countstat); }
    return 0; }