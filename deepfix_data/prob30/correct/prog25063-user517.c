#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int j,a,b,c;
    a=upperLimit-arr[0];
    for(j=0;j<n;j++){
        b=upperLimit-arr[j];
        if(b<=a){
            a=b;
            c=j; } }
    return arr[c]; }
int main() {
    int p,q,a,b,c,i,r;
    int large[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    arr[i]=0;
    a=arr[0];
    for(p=1;p<n;p++){
        if(arr[p]>a){
            a=arr[p]; } }
    large[0]=c;
    for(q=1;q<k;q++){
        b=getMaxLessThan(c);
        large[q]=b;
        c=b; }
    for(r=0;r<k;r++){
        printf("%d\n",large[r]); }
    return 0; }