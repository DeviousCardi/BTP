#include<stdio.h>
int max(int [],int);
int findlarge(int c[],int d) {
    int temp;
    int count[100];
    int i,j;
    for(i=0;i<d;i++) {
        temp=c[i];
        count[i]=1;
        for(j=i+1;j<d;j++) {
            if (c[j]>temp) {
                count[i]=count[i]+1;
                temp=c[j]; } } }
    int temp1=max(count,d);
    return temp1; }
int max(int a[],int b) {
    int temp1=a[0];
    int i;
    for(i=0;i<b;i++) {
        if(a[i]>temp1)
        temp1=a[i]; }
    return temp1; }
int main() {
    int n;
    int count[100];
    int a[100];
    int i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int temp1;
    temp1 = findlarge(a,n);
    printf("%d",temp1);
    return 0; }