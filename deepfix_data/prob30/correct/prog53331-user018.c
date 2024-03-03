#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,max=0;
    for(j=0;j<n;j++){
        if(arr[j]<upperLimit){
            if(arr[j]>max){
                max=arr[j]; } } }
    return max; }
int main() {
    int k,i,a,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; } }
    printf("%d\n",max);
    for(i=1;i<k;i++){
        a=getMaxLessThan(max);
        printf("%d\n",a);
        max=a; }
    return 0; }