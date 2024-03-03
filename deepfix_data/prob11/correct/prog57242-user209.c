#include <stdio.h>
int b=0;
long long int s;
int add(long int a[],int n,long int sum) {
    n--;
    if(n<0)
        return sum;
    if((a[n]+sum)<=s)
            sum+=a[n];
    sum+=add(a,n,sum); }
int main() {
    int n;
    long int sum=0;
    scanf("%d %lld",&n,&s);
    long int a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    int k=add(a,n,sum);
    if(k==s)
        printf("YES");
    else
        printf("NO");
        return 0; }