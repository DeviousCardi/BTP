#include <stdio.h>
#include <stdlib.h>
int main() {
    int N1;
    scanf("%d",&N1);
    int a[N1];
    for(int i=0;i<N1;i++)
        scanf("%d ",&a[i]);
    for(int i=0;i<N1;i++) {
        for(int j=i;j<N1;j++) {
               if(a[j]>a[j+1]) {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp; } } }
    for(int k=0;k<N1;k++)
        printf("%d ",a[k]);
    return 0; }