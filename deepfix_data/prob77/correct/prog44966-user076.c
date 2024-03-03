#include <stdio.h>
int main() {
    int m,i,p,k,temp=0,q,l,ar[1000];
    scanf("%d",&m);
    for(i=0;i<m;i=i+1) {
        scanf("%d",&ar[i]); }
     k=ar[0];
     p=ar[0];
    for(i=0;i<m;i=i+1) {
        if(ar[i]>=k) {
            k=ar[i];
            l=i; }
        if(ar[i]<=p) {
            p=ar[i];
            q=i; } }
    temp=ar[l];
    ar[l]=ar[q];
    ar[q]=temp;
    for(i=0;i<m;i=i+1) {
    printf("%d ",ar[i]); }
    printf("end");
    return 0; }