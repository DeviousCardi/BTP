#include <stdio.h>
int arr[100]={0};
int n,k,i;
int getMaxLessThan(int upperlimit) {
    int j,output=0;
    for (j=0;j<n;j++)
    output=((arr[j]>output && arr[j]<upperlimit) ? arr[j] : output);
    return output; }
int main() {
    scanf ("%d %d",&n,&k);
    for (i=0;i<n;i++)
    scanf ("%d",&arr[i]);
    int l;
    int max=0;
    for (i=0;i<n;i++)
    max=(max>arr[i] ? max : arr[i]);
    int upperlimit=max+1;
    for(l=0;l<k;l++) {
        upperlimit=getMaxLessThan(upperlimit);
        printf ("%d\n", upperlimit); }
    return 0; }