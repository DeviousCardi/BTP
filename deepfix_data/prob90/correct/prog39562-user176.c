#include <stdio.h>
int main(){
    int j,i,p;
    int k;
    int n;
    int num[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=0;i<n;i++) {
        if(p==1) {
            break; }
        for(j=i+1;j<n;j++) {
            if(k==(num[i]+num[j])) {
                p=1;
                printf("lucky");
                break; } } }
    if(p!=1) {
    printf("unlucky"); }
    return 0; }