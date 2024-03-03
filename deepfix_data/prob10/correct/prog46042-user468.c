#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],count[n];
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for (int i=0;i<n;i++)
    count[i]=0;
    int max[n];
    for(int j=0;j<n;j++) {
            for(int i=i+j;i<n;i++) {
            max[j]=arr[j];
            if(arr[i]>max[j])
            count[j]++; } }
    int maximum=count[0];
    for(int i=1;i<n;i++) {
        if(count[i]>max)
        maximum=count[i]; }
    printf("%d",maximum);
    return 0; }