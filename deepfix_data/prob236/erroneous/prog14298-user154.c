#include <stdio.h>
int main(){
    int n,i,j,temp;
        scanf("%d\n", &n);
    int a[n],int count[n];
    for (i=0;i<n;i++) {
        if (i==(n-1))
          scanf("%d\n",&a[i]);
        else
          scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
          scanf("%d", &count[j]); }
    for (i=0;i<n;i++) {
        j=count[i];
        temp=a[i];
        a[j]=a[i];
        a[j]=temp; }
    for(i=0;i<n;i++)
        printf("%d ",&a[i]);
        printf("end");
    return 0; }