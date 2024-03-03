#include <stdio.h>
int main() {
    int n,i,j,temp,med;
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++) {
        scanf("%f",&arr[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } } }
    if(n%2!=0) {
        med=(int)arr[n/2];
        printf("%d",med); }
    else {
        int x=(int)(arr[n/2-1]+arr[n/2]);
        if(x%2==0)
            printf("%d",x/2);
        else {
            float med=(float)x/2;
            printf("%.1f",med); } }
    return 0; }