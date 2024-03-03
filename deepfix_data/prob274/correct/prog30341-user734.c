#include <stdio.h>
int main() {
    int i,n,j,flag=0,min;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count1=0,count2=0;
    j=a[0];
    for(i=0;i<n;i++) {
        j=a[j-1];
        b[i]=j; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(b[i]==b[j]) {
                count1=j;
                count2=j-i;
                flag=1; } }
        if(flag==1)
        break; }
    printf("%d ",count1);
    printf("%d",count2);
    return 0; }