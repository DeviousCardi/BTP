#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int max=0,flag=0;
    for(i=1;i<n;i++) {
        if(a[i]>a[i-1]) {
            max=a[i]; } }
    int b[max];
    for(i=0;i<max;i++) {
        b[i]=0; }
    for(i=0;i<n;i++) {
        b[a[i]]++; }
    for(i=1;i<=max;i++) {
        if(b[i]==(i)) {
            flag=1; }
        else {
            flag=0;
            break; } }
    if(flag==1)
    printf("YES");
    else if(flag==0)
    printf("NO");
    return 0; }