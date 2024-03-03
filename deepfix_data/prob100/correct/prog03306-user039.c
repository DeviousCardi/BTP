#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[m];
    int num[n];
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&num[j]); }
        int max=num[0];
        for(int j=1;j<n;j++) {
            if(num[j]>max)
            max=num[j]; }
        arr[i]=max; }
    int min=arr[0];
    for(int i=1;i<m;i++) {
        if(arr[i]<min)
        min=arr[i]; }
    printf("%d",min);
    return 0; }