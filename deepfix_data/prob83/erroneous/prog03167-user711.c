#include <stdio.h>
void right_rotate(int n,int a[],int d){
    int a[100],d,n,i,j,temp;
    for(i=1;i<=d;i++){
        for(j=n-1;j>0;j--){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp } } }
int main() {
    int a[100],n,d,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    right_rotate(n,a,d);
    for(i=0;i<n;i++){
        printf("%d",a[i]); }
    return 0; }