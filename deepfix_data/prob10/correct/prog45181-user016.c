#include<stdio.h>
int maxasc(int n,int ar[]) {
    int maxtill[20],i,j,max;
    printf("%d\n",n);
    for(i=0;i<n;i++) {
        maxtill[i]=1;
        max=ar[i];
        for(j=i+1;j<n;j++) {
            if(ar[j]>max) {
                max=ar[j];
                maxtill[i]++; } } }
    max=maxtill[0];
    for(i=0;i<n;i++) {
        printf("%d",maxtill[i]); }
    return max; }
int main() {
    int n,i,j,arr[2],big;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    printf("%d\n",n);
    printf("%d",big);
    return 0; }