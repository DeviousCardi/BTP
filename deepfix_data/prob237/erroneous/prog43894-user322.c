#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{     int i,j,count;
      count=0;
      for(i=l;i<l+r-1;i++){
          for(j=i+1;j<=l+r-1;j++){
              if(arr[i]>arr[j]){
                  count=count+1; } } }
      return count; }
int main() {
    int n,k;
    scanf("%d\n%d\n",&n,&k);
    int p;
    for(p=0;p<n;p++){
        scanf("%d",&arr[p]); }
    int l,r,b[n-k+1];
    r=k;
    for(l=0;l<n-k+1;l++)  {
        b[l]= int getinversions(int l,int r); }
    int max;
    max=b[0];
    for(l=1;l<n-k+1;l++){
        if(b[l]>max){
            max=b[l]; } }
    printf("%d",max);
    return 0; }