#include <stdio.h>
int check(int a[], int n, int s) {
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    if(sum==s)
    return 1;
    else {
        for(i=0;i<n;i++) {
            sum=sum-a[i];
            if(sum==s) return 1;
            else {
                int b[n-1];
                int j;
                if(i!=n)
                for(j=0;j<n-1;j++) {
                    if(j!=i) b[j]=a[j];
                    if(j==i) b[i]=a[n-1]; }
                if(i==n)
                b[j]=a[j];
                check(b,n-1,s); } } } }
int main() {
    int N,S;
    scanf("%d %d",&N,&S);
    int i;
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    if (check(a,N,S)>0)
    printf("YES");
    else if(check(a,N,S)==0) printf("NO");
    return 0; }