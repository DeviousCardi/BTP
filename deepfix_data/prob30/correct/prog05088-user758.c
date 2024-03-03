#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    static int d=0;
    int a,mi=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i] <arr[j]) {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a; } } }
    if(arr[d]<=upperLimit)
    mi=arr[d];
    d++;
    return mi; }
int main() {
    int k,x;
    int lc[k];
    scanf("%d %d\n",&n,&k);
    for(int p=0;p<n;p++)
    scanf("%d",&arr[p]);
    for(x=0;x<k;x++){
        lc[x]=getMaxLessThan(999);
        printf("%d\n",lc[x]); }
    return 0; }