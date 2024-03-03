#include <stdio.h>
int main(){
    int n,t;
    int num[10000];
    scanf("%d",&n);
    for (int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(num[j]>num[j+1]) {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t; } } }
    for(t=0;t<=n;t++) {
    printf("%d",num[t]); }
    printf("end");
    return 0; }