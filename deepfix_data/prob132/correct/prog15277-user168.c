#include<stdio.h>
int main() {
    int a[1000],i,j,n,b[100],temp=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    b[i]=0;}
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>=a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    for(i=0;i<n;i++)
        {count=0;
            for(j=0;j<n;j++) {
                if(a[i]==a[j])
                count++;
            }b[count]=count;
        }for(i=0;i<n;i++)
        printf("%d",b[i]);
        return 0; }