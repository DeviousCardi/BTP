#include <stdio.h>
int sum1(int a[31],int n,int s) {
    static int p=0;
    for(int size=1;size<=n;size++) {
            for(int i=0;i<n;i++) {
                    if(size+i>n)
                    break;
                    else {
                        int sum=0;
                        for(int j=i;j<size+i;j++) {
                                sum=sum+a[j]; }
                        if(sum==s) {
                            return 1; } } } } }
int main() {
    long int n,s;
    int i,a[31];
    scanf("%ld %ld",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(sum1(a,n,k)==1)
    printf("YES");
    else
    printf("NO");
return 0; }