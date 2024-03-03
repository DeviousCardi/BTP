#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    int countstat=1;
    for(int i=0;i<n;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) {
            int p=a[i+1];
            if(a[j]>p) {
                p=a[j];
            count+=1; }
        if(count>countstat)
        countstat=count; }
    printf("%d",countstat); }
    return 0; }