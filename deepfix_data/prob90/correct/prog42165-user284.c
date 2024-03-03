#include <stdio.h>
int main(){
    int k,i,t,j;
    int num[1500];
    int n,d=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=n-1;i>0;i--) {
        t=k-num[i];
        for(j=i-1;j>=0;j--) {
            if(t==num[j]) {
                printf("lucky");
                d=1;
                break; } }
        if(d==1) {
            break; } }
    if(d==0) {
        printf("unlucky"); }
    return 0; }