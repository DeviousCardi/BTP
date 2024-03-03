#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int k,a;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a; } } }
    for (int i=0;i<n;i++){
        if(arr[i]==upperLimit){
            return arr[i]; }
        if (arr[i]<upperLimit&&arr[i+1]>upperLimit&&arr[i]!=arr[0]&&arr[i]!=arr[n-1]){
            return arr[i]; }
        if (arr[n-1]<upperLimit){
            return arr[n-1]; } } }
int main() {
    return 0; }