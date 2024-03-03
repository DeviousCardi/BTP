#include <stdio.h>
int main(){
    int n,i,j,unit;
    int a[100];
    int index[100];
    int books[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        scanf("%d",&a[i]); }
    i=0;
    for(i=0;i<=n;i++) {
        for(j=1;j<n-1;j++)
        if(index [i] > index [j])
        unit=index[i];
        index[i]=index[j];
        index[j]=unit;
        unit=books[i];
        books[i]=books[j];
        books[j]=unit; }
    for(i=1;i<=n;i++)
    printf("%d",a[i]);
    printf("end");
    return 0; }