#include<stdio.h>
int max(int,int[],int[],int);
void function1(int[],int);
int main() {
    int n,i,arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    function1(arr [],n);
    return 0; }
 function1(int arr[],int n) {
     int k,maxtill[n];
     maxtill[0]=1;
     for(k=1;k<n;k++) {
         maxtill[k]=max(k,maxtill[],arr[],n); }
     int small=maxtill[0];
     for(int i=0;i<n;i++)
      { if(small<maxtill[i])
       small=maxtill[i]; }
     printf("%d",small); }
 int max(int a,int maxtill[],int arr[],n)
 {   int j,k=0;
     for(j=0;j<a;j++)
      { if(arr[j]<arr[a])
        k= 1+maxtill[j] }
     if(k==0)
     return 1;
     else return k; }