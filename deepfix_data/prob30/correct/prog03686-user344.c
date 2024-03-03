#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0; i<n; i++){
        if((arr[i]>max)&&(arr[i]<upperLimit)){
            max=arr[i]; } }
    return max; }
int main() {
    int k, i, j=1, maxm=0, m;
    scanf("%d %d\n", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]); }
    for(i=0; i<n; i++){
        if(arr[i]>maxm){
            maxm=arr[i]; } }
    printf("%d\n", maxm);
    while(j<k){
        for(i=0; i<n; i++){
            m=0;
            if((arr[i]>m)&&(arr[i]<maxm)){
                m=arr[i]; } }
        printf("%d\n", getMaxLessThan(maxm));
        maxm=m;
        j++; }
    return 0; }