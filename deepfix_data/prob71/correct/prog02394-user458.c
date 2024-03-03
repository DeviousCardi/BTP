#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                 int k=a[i];
              a[i]=a[j];
              a[j]=k; } } }
    if (n%2!=0){
        int k=n/2;
        printf("%d",a[k]); }
    return 0; }