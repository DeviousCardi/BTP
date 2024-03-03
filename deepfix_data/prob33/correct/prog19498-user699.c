#include <stdio.h>
int main() {
    int h,n,max=-1;
    scanf("%d %d",&h,&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",a[i]); }
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
            continue; }
        else if (a[i]<max){
            h=h-(a[i]-max); } }
    if (h>0){
        printf("Yes"); }
    else printf("No");
    return 0; }