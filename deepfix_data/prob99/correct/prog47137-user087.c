#include<stdio.h>
  int a[20]={0};int MaxTill[20]={0};
int max(int index)
    {   int j;
        if(index==0) {
                return 1; }
        else if(index>0)
            {   int flag=0;
                for(j=index-1;j>=0;j--) {
                        if(a[j]<a[index])
                            {   flag=1;
                                return (1+MaxTill[j]);
                                break; } }
                    if(flag==0) {
                            return 1; } } }
int main()
{   int n;int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
            scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
            MaxTill[i]=max(i); }
    int maximum=0;
    for(i=0;i<n;i++) {
            if(MaxTill[i]>maximum) {
                    maximum=MaxTill[i]; } }
        printf("%d",maximum);
    return 0; }