#include <stdio.h>
#include <stdlib.h>
int rcr(int n) {
    int s1;
    if(n==0){
        return 0; }
    else{
        s1=2*rcr(n-1)+1;
        return  s1; } }
int main(){
    int t,i,j,count;
    scanf("%d",&t);
    printf("%d\n",t);
    int a[t];
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    for(i=0;i<t;i++){
        if(a[i]<0){
            printf("no\n"); }
        else if(a[i]>=0) {
            j=0;
            count=0;
            while(rcr(j)<=a[i]){
                count=count+1;
                j++; }
            if(count==a[i]){
                printf("yes\n"); }
            else{
                printf("no\n"); } } }
    return 0; }