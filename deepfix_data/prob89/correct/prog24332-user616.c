#include <stdio.h>
int main(){
    int k=0,n=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    int flag=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if((ar[i]+ar[j])==k) {
                flag=1;
                break; } }
        if(flag==1) {
            break; } }
    if(flag==1) {
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }