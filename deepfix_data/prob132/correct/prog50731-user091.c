#include <stdio.h>
void sort(int a[],int n){
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
int main() {
    int n;
    scanf("%d",&n);
    int a[20];
    char b[20];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%c",&b[i]); }
    sort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0; }