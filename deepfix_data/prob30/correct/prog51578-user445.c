#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int c,i;
    c=-1;
    for(i=0;i<n;i++) {
        if((arr[i]>c)&&arr[i]<(upperLimit))
            c=arr[i]; }
    return c; }
int main() {
    int i,j,k,c;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    c=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>c)
        c=arr[i]; }
    printf("%d\n",c);
    for(i=2;i<=k;i++) {
        j=getMaxLessThan(c);
        printf("%d\n",j);
        c=j; }
    return 0; }