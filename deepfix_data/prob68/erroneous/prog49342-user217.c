#include<stdio.h>
int product(int n, int a[n]){
    int p;
    if(n=1){
        return (a[n]); }
    if(n!=1){
        p=a[n-1]*product(n-1,a[n-1]);
    }return p; }
int main()
{int m,k,i;
scanf("%d",&m);
int b[m];
for(i=0;i<n;i=i+1){
    scanf("%d",b[i]);
}k = product(m;b);
printf("Product of given integer is %d",k);
    return 0; }