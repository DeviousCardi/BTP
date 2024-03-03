#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(int i=0;i<n;i++)
    {scanf("%d",&b[i]);}
    for(int i=0;i<n;i++) {
        a[b[i]]=a[i]; }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }