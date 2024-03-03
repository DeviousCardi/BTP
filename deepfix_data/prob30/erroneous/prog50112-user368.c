#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int temp=0,i=0;
    while (temp<upperLimit){
        if(arr[i]>temp&&arr[i]<upperLimit){
            temp=arr[i]; }
        i++ }
    return temp; }
int main() {
    int temp,b=99999999;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    while(k>0){
        temp=getMaxLessThan(b);
        printf("%d\n",temp);
        b=temp;
        k=k-1; }
    return 0; }