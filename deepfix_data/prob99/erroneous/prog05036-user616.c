#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int maxtill[n],max=0;
    for(int i=n-1;i>=0;i++) {
        maxtill[i]=1;
        int m=a[i];
        for(intj=i-1;j>=0;j++) {
            if(a[j]<m) {
                maxtill[i]++;
                m=a[j]; } }
        if(maxtill[i]>max) {
            max=maxtill[i]; } }
    printf("%d",max);
    return 0; }