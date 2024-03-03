#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int a3[n];
    for(int j=0;j<5*n;) {
        for(int k=0;k<5*n;) {
        if((k+1)==arr[j%5])
        {    a3[j]=arr[j+2];
            j++;
            k++; }
        else k++;} }
    for(int k=0;k<5*n;k++)
    printf("%d ",a3[k]);
    return 0; }