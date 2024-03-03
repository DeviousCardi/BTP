#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int num[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    int l=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i!=j) {
                if(k==num[i]+num[j])
                l++ } } }
    if(l>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }