#include <stdio.h>
int main() {
    int i,j,num,flag=0;
    int n,count=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==a[j])
            count=count+1; }
        if(count==0) {
           flag=1;
           num=i; }
        if(count==2) {
            flag=2;
            N=i; } }
    if(flag==1)
     printf("%d\n",num);
    if(flag==2)
    printf("%d\n",N);
    return 0; }