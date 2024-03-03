#include<stdio.h>
int maxasc(int n,int ar[]) {
    int maxtill[20],i,j,max;
    for(i=0;i<n;i++) {
        maxtill[i]=1;
        max=0;
        for(j=i;j<n;j++) {
            if(ar[j]>max) {
                max=ar[j];
                maxtill[i]++; } } }
    max=maxtill[0];
    for(i=0;i<n;i++) {
        if(maxtill[i]>max)
        max=maxtill[i]; }
    return &max; }
int main() {
    int n,i,j,arr[2],big;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    big=maxasc(n,arr);
    printf("%d",big);
    return 0; }