#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int count1=a[0];
    int count2=a[0];
    int j=0;
    int m=0;
    int x=0;
    int y=0;
    while(j<n) {
        if(count1<a[j]) {
            count1=a[j];
            x=j; }
        j++; }
    while(m<n) {
        if(count2>a[m]) {
            count2=a[m];
            y=m; }
        m++; }
    int t=a[x];
    a[x]=a[y];
    a[y]=t;
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); }
    printf("end");
    return 0; }