#include<stdio.h>
int main() {
    int n;
    int count=0;
    int a[100],b[1000];
    int i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int temp=a[0];
    for(i=1;i<n;i++) {
        for(j=0;j<n;j++) {
            if (a[i]>temp)
            count++; }
        b[k]=count;
        k++;
        count=0; }
    int count1=k;
    int temp1=b[0];
    for(i=0;i<count1;i++) {
        if(b[i]>temp1)
        temp1=b[i]; }
    printf("%d",temp1);
    return 0; }