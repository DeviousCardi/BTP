#include<stdio.h>
#include<strings.h>
void reverse(int x[],int n);
int num[100000];
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    reverse(num,n);
    return 0; }
void reverse(int x[],int n) {
    for(int i=0;i<n;i++) {
        if(x[i]!=EOF) {
            reverse(x,n); } }
    for(int j=0;j<n;j++) {
        printf("%d ",x[j]); }
    return; }