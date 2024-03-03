#include <stdio.h>
int a[100]={0};
int n;
void get(int upperLimit) {
 int m=0;
for(int i=0;i<n;i++){
    printf("*%d ",a[i]); } }
int main() {
    int n,k,max=0;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<n;i++){ }
    for(int i=0;i<n;i++){
       if(a[i]>max)
       max=a[i]; }
    printf("%d\n",max);
    get(0);
    return 0; }