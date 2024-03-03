#include <stdio.h>
int main(){
    int total;
    scanf("%d",&total);
    int a[total+1];
    int i;
    for(i=1;i<=total;i++){
        scanf("%d",&a[i]); }
    int t=2,m=a[1],l;
    for(l=1;l<=total;l++){
    for(i=1;i<=total;i++){
        if(a[m]==a[l]){
        printf("%d %d",t,t-l);
        return 0; }
        m=a[m];
        t++; }
    m=a[l];
    t=2; }
    return 0; }