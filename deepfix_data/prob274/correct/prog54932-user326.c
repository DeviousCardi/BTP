#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int a3[n];
    for(int j=0;j<n;) {
        if((j+1)==arr[j])
        {    a3[j]=arr[j];
            j++; }
        else j++; }
    for(int k=0;k<n;k++)
    printf("%d",a3[k]);
    return 0; }