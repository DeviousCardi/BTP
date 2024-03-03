#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int a=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for (int i=0;i<n;i++){
        for (int j=1+i;j<=n;j++){
            if(arr[j]<upperLimit&&arr[j]>a){
                return a=arr[j]; }
            else if (arr[0]<upperLimit&&arr[0]>a){
                a=arr[0];
                return a; }
            else return a; } } }
int main() {
    int max=0,k;
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i]; } }
    int b[n];
    b[0]=max;
    for (int i=1;i<=k;i++){
        b[i]=getMaxLessThan(b[i-1]); }
    for (int i=0;i<k;i++){
        printf("%d\n",b[i]); }
    return 0; }