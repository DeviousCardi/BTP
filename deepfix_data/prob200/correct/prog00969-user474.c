#include <stdio.h>
int arr[100]={0};
int n;
void getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<n;i++) {
       if(arr[i]==upperLimit) {
           printf("%d\n",upperLimit);
           arr[i]=-1; } } }
int main() {
    int m,k,i,max;
    scanf("%d %d ",&m,&k);
    n=m;
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    for(i=0;i<n;i++) {
        arr[i]=ar[i]; }
    for(i=0;i<k;i++) {
        printf("yo");
        max=-1;
        for(i=0;i<n;i++) {
            if(ar[i]>max) {
                max=ar[i]; } }
        getMaxLessThan(max); }
    return 0; }