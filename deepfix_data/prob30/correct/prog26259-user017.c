#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i=0,max2=0;
    while(arr[i]>0){
        if(arr[i]>max2 && arr[i]<=upperLimit){
            max2=arr[i]; }
        i++; }
    return max2; }
int main() {
    int k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int ul=0;
    for(i=0;i<n;i++){
        ul=ul<arr[i]?arr[i]:ul; }
    printf("%d",ul);
    for(i=1;i<k;i++){
        ul=getMaxLessThan(ul-1);
        printf("\n%d",ul); }
    return 0; }