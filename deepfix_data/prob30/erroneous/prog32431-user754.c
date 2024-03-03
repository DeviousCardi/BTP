#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,temp=a[0];
    for(i=0;i<n;i++){
        if(a[i]>temp&&a[i]<l)
        temp=a[i]; }
    return temp; }
int main() {
    int k,i,l;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    l=a[0];
    for(i=0;i<n;i++)
        if(a[i]>l)
            l=a[i];
    printf("%d\n",l);
    for(i=1;i<k;i++){
        l=getMaxLessThan(l);
        printf("%d\n",l); }
    return 0; }