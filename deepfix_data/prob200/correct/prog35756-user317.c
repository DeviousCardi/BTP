#include <stdio.h>
int a[100];
int n;
void get(int upperLimit,int a[]) {
 int m=0;
for(int i=0;i<n;i++){
    printf("*%d ",a[i]); } }
int main() {
    int n,k,max=0;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<n;i++){
    printf("*%d ",a[i]); }
    for(int i=0;i<n;i++){
       if(a[i]>max)
       max=a[i]; }
    get(0,a);
    return 0; }