#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int maxtill[n],max=0;
    for(int i=0;i<n;i++) {
        int m=0;
        maxtill[i]=0;
        for(int j=0;j<i;j++) {
            if(a[i]>a[j]) {
                if(m<maxtill[j])
                m=maxtill[j]; } }
        maxtill[i]=m+1;
        if(max<maxtill[i])
        max=maxtill[i]; }
    printf("%d",max);
    return 0; }