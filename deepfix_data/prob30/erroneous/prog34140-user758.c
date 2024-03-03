#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    static int d=0;
    int a,mi;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i] <arr[j]) {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a; } } }
    if(arr[d]<=upperLimit)
    mi=arr[d];
    return mi;
    d++; }
int main() {
    int k;
    int lc[k];
    scanf("%d %d\n",&n,&k);
    for(int p=0;p<n;p++)
    scanf("%d",arr[p]);
    for(int l=0;l<k;l++)
    lc[l]=getMaxLessThan(999);
    printf("%d\n",lc[l]);
    return 0; }