#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,temp=0;
    for(i=0;i<n;i++){
        if(arr[i]>temp&&arr[i]<upperLimit)
            temp=arr[i]; }
    return temp; }
int main() {
    int k,i,l;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf(" %d",&arr[i]);
    l=arr[0];
    for(i=0;i<n;i++)
        if(arr[i]>l)
            l=arr[i];
    printf("%d\n",l);
    for(i=1;i<k;i++){
        l=getMaxLessThan(l);
        printf("%d\n",l); }
    return 0; }