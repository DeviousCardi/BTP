#include <stdio.h>
int main() {
    int n,i,tmp=1;
    int a[100],b[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b[0]=a[0];
    for(i=1;i<200;i++){
        b[i]=a[b[i-1]]; }
    for(int i=0;i<200;i++){
        for(int j=i-1;j>=0;j--){
            if(b[i]==b[j-1]){
                printf("%d %d",j,i-j);
                return 0; } } }
    return 0; }