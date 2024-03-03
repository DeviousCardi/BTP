#include<stdio.h>
int max(int a[],int n);
int main() {
    int n,maxii;
    scanf("%d",&n);
    int a[n],MaxTill[n];
    for(int i=0;i<n;i++) {
        scanf("%d",a+i);
        MaxTill[i]=1; }
    for(int i=1;i<n;i++) {
        maxii=1;
        for(int j=0;j<i;j++) {
            if(a[i]>a[j] && MaxTill[j]>maxii) {
               maxii=++MaxTill[j]; } } }
    printf("\n%d",max(MaxTill,n));
    return 0; }
int max(int a[],int n) {
    int maximum;
    maximum=a[0]; {
        for(int i=0;i<n;i++) {
            if(a[i]>maximum) {
                maximum=a[i]; } } }
    return maximum; }