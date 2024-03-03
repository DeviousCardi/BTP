#include <stdio.h>
int main(){
    int n,t;
    int num[10000];
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++) {
        scanf("%d",&num[i]); }
    for (int i=0;i<=n-1;i++) {
        for(int j=0;j<=n-1;j++) {
            if(num[j]>num[i]) {
                t=num[i];
                num[i]=num[j];
                num[j]=t; } } }
    for(int i=0;i<=n-1;i++) {
    printf("%d",num[i]); }
    printf("end");
    return 0; }