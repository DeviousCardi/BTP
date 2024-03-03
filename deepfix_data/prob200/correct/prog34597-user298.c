#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int c=0;
    for(int i=0;i<n;i++) {
         c=arr[0];
        for(int j=0;j<n;j++) {
            if (c>arr[i]) {
                c=arr[i]; } }
        break; }
    for (int i=0;i<n;i++) {
        if(c<arr[i] && c<upperLimit) {
            c=arr[i]; } }
    return c; }
int main() {
    int k,c;
    scanf("%d %d",&n,&k);
    int i,j,m[100];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=0;i<n;i++) {
        c=arr[i];
        for (j=0;j<n;j++) {
            if(c<arr[j]) {
                c=arr[j]; } }
        break; }
    m[0]=getMaxLessThan(c);
    for(i=1;i<k;i++) {
        m[i]=getMaxLessThan(m[i-1]); }
    for(j=0;j<k;j++) {
        printf("%d\n",m[j]); }
    return 0; }