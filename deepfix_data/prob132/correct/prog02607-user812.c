#include <stdio.h>
void aa(char a[],int n){
    int d,k;
    d=n;
    k=0;
    int b[d];
    for(int i=0;i<n+n-1;i++){
        if(48<a[i]<57){
        b[k]=a[i]-48;
        k++;
        printf("%d\n",b[k]); }
        else continue; }
    int c[d];
    for(int i=0;i<d;i++){
        c[b[i]]++;
        printf("%d\n",c[b[i]]); }
    return; }
int main()
{  int n,i;
      char a[100];
      char p=',';
      printf("%d",p);
    scanf("%d",&n);
      for(i=0;i<n+(n-1);i++)
       scanf("%c",&a[i]);
        aa(a,n);
    return 0; }