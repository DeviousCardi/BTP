#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int m[n];
    for(int i=0;i<n;i++)
    m[n]=0;
    for(int i=0;i<n;) {
        for(int j=i;j<n;) {
            if(a[i]<a[j]) {
                i++;
                j++;
                m[i]++; }
            else if(j<n)
            j++;
            else
            i++; } }
    int max=m[0];
    for(int i=0;i<n;i++) {
        if(m[i]>max)
        max=m[i]; }
    printf("%d",max);
    return 0; }