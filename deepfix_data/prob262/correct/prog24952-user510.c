#include<stdio.h>
#include<strings.h>
int n;
void rev(int a[]){
 int i=n-1;
    if(i>0) {
        printf("%d ",a[i]);
        i--;
        rev(a); }
    return; }
int main() {
    int i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rev(a);
    return 0; }