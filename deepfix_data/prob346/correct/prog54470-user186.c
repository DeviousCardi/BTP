#include <stdio.h>
int main() {
    int count,i,j,b;
    scanf("%d",&count);
    int a[count];
    for(i=0;i<count;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<count;i++) {
        if(a[i]>a[i+1]) {
            for(j=i+1;j>=0;j--) {
                if(a[j]>a[j+1]) {
                    b=a[j];
                    a[j]=a[j+1];
                    a[j+1]=b; } } } }
    for(i=0;i<count;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }