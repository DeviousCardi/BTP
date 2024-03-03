#include<stdio.h>
int main() {
    int n,max;
    scanf("%d",&n);
    int a[n],counter[n];
    for(int i=0;i<n;i++) {
        scanf("%d",a+i);
        counter[i]=0; }
    for(int i=0;i<n;i++) {
        max=a[i];
        for(int j=i;j<n;j++) {
            if(a[j]>max) {
                counter[i]++;
                max=a[j]; }
            else {
                break; } } }
    max=counter[0];
    for(int i=0;i<n;i++) {
        if(max<counter[i]) {
            max=counter[i]; } }
    printf("%d",max); }