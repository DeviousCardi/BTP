#include <stdio.h>
int main() {
    int n,temp;
    scanf("%d\n",&n);
    int a[100],i;
    int s[100];
    for( i=0;i<n;i++) {
       scanf("%d",&a[i]); }
    int b[100];
    for(int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(int m=0;m<n;m++) {
        s[m]=b[m]; }
    for(int k=0;k<n;k++) {
        for(int l=k;l<n;l++) {
            while(s[l]>s[k]) {
                temp=s[l];
                s[l]=s[k];
                s[k]=temp; } } }
    for(int r=n;r>0;r--)
    printf("%d ",a[b[s[r]]]);
       printf("end");
    return 0; }