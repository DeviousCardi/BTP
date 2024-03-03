#include <stdio.h>
int main(){
    int n,t;
    int num[10000];
    scanf("%d",&n);
    for (int i=0;i<n-1;i++) {
        for(int j=0;j<i-1;j++) {
            if(num[j]>num[i]) {
                t=num[j];
                num[j]=num[i];
                num[i]=t; } } }
    for(int i=0;i<=n-1;i++) {
    printf("%d",num[i]); }
    printf("end");
    return 0; }