#include <stdio.h>
int b=0;
long long int s;
int add(long int a[],int n,long int sum) {
        if(a[n]<s && sum<a[n])
            sum+=a[n];
    n--;
    sum=add(a,n,sum); }
int main() {
    int n;
    long int sum=0;
    scanf("%d %lld",&n,&s);
    long int a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    int k=add(a,n,sum);
    if(k==1)
        printf("YES");
    else if(k==0)
        printf("NO");
        return 0; }