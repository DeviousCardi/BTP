#include<stdio.h>
  int a[20]={0};
int max(int index) {
        if(index==1) {
                return 1; }
        else if(index>1)
            {   int flag=0;
                for(j=i-1;j>=1;j--) {
                        if(a[j]<a[i])
                            {   flag=1;
                                return (1+MaxTill[j]);
                                break; }
                        else if(flag==0) {
                                return 1; } } } }
int main()
{   int n;int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
        int MaxTill[n];
    for(i=0;i<n;i++) {
            Maxtill[i]=max(i); }
    return 0; }