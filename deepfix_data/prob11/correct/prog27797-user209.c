#include <stdio.h>
int b=0;
long long int s;
int add(long int a[],int n,long int sum) {
    long int min=0,max=0,k,l;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(a[i]<min && a[i]<a[j] && a[i]>-1) {
                k=i;
                min=a[i]; }
            if(a[i]>max && a[i]>a[j]) {
                l=i;
                max=a[i]; } } }
    a[k]=a[l]=-1;
    if(max<s)
    sum+=max;
    else
    sum+=min;
    if(sum==s)
        return 1;
    else if((sum+max)<s)
       sum+= add(a,n,sum);
    else
    return -1; }
int main() {
    int n;
    scanf("%d %lld",&n,&s);
    long int a[n],sum=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",a[4]);
        return 0; }