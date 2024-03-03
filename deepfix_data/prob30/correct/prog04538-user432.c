#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,temp=0,b=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit)
            temp=arr[i];
        if(temp>b)
            b=temp; }
    return b; }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    int i,j,max=0,temp,u;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++)
            if(arr[j]>arr[i])
                temp=arr[j];
        if(temp>max)
            max=temp; }
    printf("%d\n",max);
    for(i=1;i<k;i++) {
       u=getMaxLessThan(max);
       printf("%d\n",u);
       max=u; }
    return 0; }