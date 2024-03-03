# include <stdio.h>
int check(int[],int,int,int);
int main() {
    int n,i,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    res=check(arr,n-1,0,0);
    if(res==1)
        printf("YES");
    else
        printf("NO");
    return 0; }
int check(int a[],int n,int s1,int s2) {
    printf("s1=%d and s2=%d\n",s1,s2);
    if(n<0) {
        if(s1==s2)
            return 1;
        return 0; }
    return (check(a,n-1,s1+a[n],s2) || check(a,n-1,s1,s2+a[n])); }