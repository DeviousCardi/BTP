#include <stdio.h>
int main() {
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i;j<n-1;j++) {
            if(arr[j]>arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; } } }
    if(n%2!=0) {
        printf("%d",arr[n/2]); }
    else {
        int x=(arr[n/2-1]+arr[n/2]);
        if(x%2==0)
            printf("%d",x/2);
        else {
            float med=(float)x/2;
            printf("%.1f",med); } }
    return 0; }