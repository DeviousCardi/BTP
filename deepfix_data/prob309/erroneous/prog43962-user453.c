#include <stdio.h>
int count(int a[],int b)
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    int i;
    char c;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        scanf("%c",&c); }
    for(i=0;i<n;i++) {
        if((count(a,a[i])!=i)
         flag=1; }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }
int count(int a[],int b) {
    int count1=0;
    for(i=0;i<n;i++) {
        if(a[i]==b)
        count1=count1+1; }
    return count1; }