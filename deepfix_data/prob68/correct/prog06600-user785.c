#include<stdio.h>
#include<math.h>
int product(int a[], int pro){
    pro = pro*a[0];
    return pro; }
int main()
{   int n, i, p = 1, a[1000000000];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a);
        p = product(a,p); }
    printf("%d",p);
    return 0; }