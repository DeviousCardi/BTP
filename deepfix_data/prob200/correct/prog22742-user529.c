#include <stdio.h>
int getMaxLessThan(int);
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,i,pos;
    for(i=0;i<n;i++) {
        if(arr[i]==upperLimit) {
            pos=i;
            break; } }
    for(i=0;i<n;i++) {
        if(arr[i]>max&&arr[i]<=upperLimit&&i!=pos)
            max=arr[i]; }
    return max; }
int main() {
    int k,max=0,i;
    scanf("%d %d",&n,&k);
    int choc[k];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    choc[0]=max;
    for(i=1;i<k;i++)
        choc[i]=getMaxLessThan(choc[i-1]);
    for(i=0;i<k;i++)
        printf("%d\n",choc[i]);
    return 0; }