#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0];
    for(int m=0;m<n;m++){
    if(arr[m]>max && arr[m] < upperLimit){
        max=arr[m]; } }
return max; }
int main() {
    int k,d=100000;
    scanf("%d %d",&n,&k);
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]); }
    for(int b=0;b<k;m++){
        int c=getMaxLessThan(d);
        int f=c; }
    printf("%d\n%d",f,c);
    return 0; }