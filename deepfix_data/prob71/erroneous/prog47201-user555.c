#include <stdio.h>
float median(int arr[],int n) {
    int i,j,med,temp;
    int m;
    arr[0]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&m);
        for(j=0;j<n-1;j++) {
            if(j==0) {
                arr[j]=m;
                break; }
            else if(m<arr[j-1]) {
                arr[j]=arr[j-1];
                arr[j-1]=m;
                break; }
            else if(arr[j-1]==m) {
                arr[j]=arr[j-1];
                break; } } }
    if(n%2!=0) {
        return arr[n/2]; }
    else {
        return (arr[(n/2)-1]+arr[n/2])/2 } }
int main() {
    int n;
    float med;
    scanf("%d",&n)
    int arr[n];
    med=median(arr,n);
    if(n%2!=0) {
        med=(int)med;
        printf("%d",med); }
    else {
        printf("%.1f",med); }
    return 0; }