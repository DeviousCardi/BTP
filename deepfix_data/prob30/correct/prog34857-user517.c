#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int j,a,b,c;
    a=upperLimit-arr[0];
    for(j=0;j<n;j++){
        b=upperLimit-arr[j];
        if(b==0){
            continue; }
        if(b<=a&&b>0){
            a=b;
            c=j;
            continue; } }
    return arr[c]; }
int main() {
    int p,q,a,b,i,r;
    int large[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    a=arr[0];
    for(p=1;p<n;p++){
        if(arr[p]>a){
            a=arr[p]; } }
    large[0]=a;
    for(q=1;q<k;q++){
        b=getMaxLessThan(a);
        large[q]=b;
        a=b; }
    for(r=0;r<k;r++){
        printf("%d\n",large[r]); }
    return 0; }