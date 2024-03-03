#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<upperLimit && arr[i]>max){
            max=arr[i]; }
        return max; } }
int main() {
    int k,i,ul;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    ul=1000;
    for(i=0;i<k;i++){
        printf("%d\n", getMaxLessThan(ul));
        ul=getMaxLessThan(ul); }
    return 0; }