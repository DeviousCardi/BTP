#include <stdio.h>
int main() {
    int h,n,i,p[100],l=0,d;
    scanf("%d",&h);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]); }
    for(i=0;i<n;i++){
        if(p[i]<p[i+1]){
            d=1;
            l=0;
            continue; }
        else if(p[i]>p[i+1]){
            l=p[i]-p[i+1];
            h=h-l;
            h!=0;
            d=1; }
        else if(p[i]>p[i+1]){
            l=p[i]-p[i+1];
            h=h-l;
            h=0;
            break; } }
    if(d==1){
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }