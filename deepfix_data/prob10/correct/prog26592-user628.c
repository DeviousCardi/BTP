#include<stdio.h>
int main() {
    int n;
    int count[100];
    int a[100],b[1000];
    int i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int temp;
    for(i=0;i<n;i++) {
        temp=a[i];
        count[i]=1;
        for(j=i+1;j<n;j++) {
            if (a[j]>temp) {
                count[i]=count[i]+1;
                temp=a[j]; } } }
    return 0; }