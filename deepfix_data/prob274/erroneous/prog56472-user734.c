#include <stdio.h>
int main() {
    int i,n,j,flag;
    scanf("%d",&n);
    int a[n],b[n+];
    for(i=0;i<n;i++)
    scanf("%d",&a[0]);
    int count1=0,count2=0;
    b[0]=1;
    j=1;
    for(i=1;i<n;i++) {
        j=a[j-1];
        b[i]=j; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(b[i]==b[j]) {
                count1=j+1;
                count2=j-i;
                flag=1; } }
        if(flag==1)
        break; }
    printf("%d ",count1);
    printf("%d",count2);
    return 0; }