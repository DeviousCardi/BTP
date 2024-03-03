#include<stdio.h>
#include<math.h>
int product(int a[], int pro){
    pro = pro*a[0];
    return pro; }
int main()
{   int  i, p = 1, a[1000000000];
    double n,
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
        p = product(a,p); }
    printf("%d",p);
    return 0; }