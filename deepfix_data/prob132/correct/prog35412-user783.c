#include <stdio.h>
int main() {
    int i,j,d=0,n,a[999999],temp,c=1,arr[9999],sum=0;
    char b[999999];
    arr[0]=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d %c",&a[i],&b[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
       { temp=a[i];
        a[i]=a[j];
        a[j]=temp;} }
    for(i=0;i<n;i++) {
        if(a[i]==a[i+1])
        c=c+1;
        else
        {   d=d+1;
            arr[d]=c;
            c=1; } }
    printf("%d",d);
    for(i=1;i<=d;i++)
    {sum=sum+arr[i];}
    if(sum==n)
    printf("Yes");
    else
    printf("No");
    return 0; }