#include <stdio.h>
#include <stdlib.h>
int main() {
    int N1;
    scanf("%d",&N1);
    int a[N1];
    for(int i=0;i<N1;i++)
        scanf("%d ",&a[i]);
    int N2;
    scanf("%d ",&N2);
    int b[N2];
    for(int j=0;j<N2;j++)
        scanf("%d ",&a[j]);
    for(int i=0;i<N1;i++) {
        for(int j=0;j<N1-1;j++) {
               if(a[j]>a[j+1]) {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp; } } }
    int i,j;
    for(i=0;i<N1;i++) {
        for(j=0;j<N2;j++) {
            if(a[i]==a[j])
                break; }
        if(j==N2)
            break; }
    printf("%d ",a[i]);
    return 0; }