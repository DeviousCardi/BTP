#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int l=0;l<n-1;l++) {
        int a;
        scanf("%d,",&a);
        arr[l]=a; }
    scanf("%d",&arr[n-1]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    int arr1[n];
    int c1=0;
    int bool1=0;
    for(int j=0;j<n;j++) {
        int bool2=0;
        for(int k=0;k<c1;k++) {
            if(arr[j]==arr1[k]) {
                bool2=1;
                break; } }
        if(bool2==0) {
            int count=0;
            arr1[c1]=arr[j];
            c1++;
            for(int m=j+1;m<n;m++) {
                if(arr[m]==arr[j])
                    count++; }
            if(count!=arr[j]-1)
                bool1=1; } }
    if(bool1==0)
        printf("Yes");
    else
        printf("No");
    return 0; }