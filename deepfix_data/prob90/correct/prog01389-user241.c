#include <stdio.h>
int main(){
    int k,n,count=0;
    int a[500],b[500];
    scanf("%d",&k);
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<100;i++) {
        b[i]=0; }
    for(i=0;i<n;i++) {
        b[(a[i])]=1; }
    for(i=0;i<100;i++) {
        if(b[(a[i])]==1&&b[k-(a[i])]==1) {
        count++;
        break; } }
    if(count==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }