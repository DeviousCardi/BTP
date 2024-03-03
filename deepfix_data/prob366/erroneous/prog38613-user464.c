#include <stdio.h>
int dist(int a[],int n);
int main(){
    int i,n,a[400],t[200],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
    for(j=i;j<n;j++) {
    if(a[i]==a[j]) {
        t[i]=j-i; } } }
   int  dist(int t[],int n);
    return 0; }
int dist(int t[],int n) {
    for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    if(t[i]>t[j]){
        int c=t[i];
        t[i]=t[j];
        t[j]=c; }
    printf("%d",a[0]);
    return 0; }