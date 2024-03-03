#include <stdio.h>
int main() {
    int total;
    scanf("%d",&total);
    int a[total+1];
    int i;
    for(i=0;i<=total;i++){
        a[i]=0; }
    int c;
    for(i=0;i<total;i++){
        scanf("%d",&c);
        a[c]++;
        if(a[c]==2){
            printf("%d/n",a[c]); } }
    for(i=1;i<=total;i++){
        if(!a[i]){
            printf("%d",a[i]);
            return 0; } }
    return 0; }