#include <stdio.h>
int main() {
    int num,i,j,a[100];
    int sum=0;
    char ch[100];
    scanf("%d\n",&num);
    for(i=0;i<2*num;i++) {
          scanf("%c",&ch[i]); }
    for(i=0;i<2*num;i++) {
        a[i]=ch[i]; }
    for(j=1;j<2*num;j++) {
            if(a[0]%a[j]==0&&a[j]!=44) {
                sum=sum+i;
                printf("%d ",sum); }
            else {
                continue; } }
    if(sum!=0) {
        printf("No"); }
    else {
        for(j=4;j<2*num;j++) {
            if(a[2]%a[j]==0&&a[j]!=44) {
                sum=sum+1; }
            else {
                continue; } } }
    if(sum==0) {
        printf("No\n"); }
    else {
        printf("Yes"); }
    return 0; }