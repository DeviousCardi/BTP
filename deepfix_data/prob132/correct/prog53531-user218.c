#include <stdio.h>
int main() {
    int n,flag=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        b[i]=0; }
    for(int i=1;i<=n;i++) {
        b[a[i]]++; }
    for(int i=1;i<=n;i++) {
        if(b[i]==i)
        flag=1;
        else{
        flag=0;
        break; } }
    if(flag==1) {
        printf("Yes"); }
    else
    printf("No");
    return 0; }