#include <stdio.h>
int sumfinder(int n,int a[n],int sum) {
    int flag=0;
    int s = 0;
    int i;
    for(i=0;i<n;i++) {
        if(s+a[i]>sum && flag==0) {};
        if(s+a[i]==sum && flag==0) {
            return 1;
            flag++;
            break; }
        if(s+a[i]<sum && flag==0) {
            s+=a[i]; } }
    if(flag==0) printf("NO"); }
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    int i,sum=0;
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]);
        sum+=A[i]; }
    printf("%d\n",sum);
    sumfinder(n,A,sum/2); }