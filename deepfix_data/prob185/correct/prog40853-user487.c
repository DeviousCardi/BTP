#include <stdio.h>
void sort(int N,int a[50],int start) {
    int i;
    int max=a[start];
    if (start>= N-1)
    return;
    for(i=start+1;i<N;i=i+1) {
       if (a[i]>max)
       a[start]=a[i];
       a[i]=max;
       max=a[start]; }
    sort(N,a,start+1);
    return; }
void check(int N,long S,int a[50]) {
    int i; }
int main() {
    int N;
    long S,sum=0;
    int i,a[50];
    int flag=0;
    scanf ("%d %ld",&N,&S);
    for(i=0;i<N;i=i+1) {
        scanf ("%d",&a[i]);
        if (a[i]==S)
        {printf ("YES");flag=1;break;}
        sum=sum+a[i]; }
    if ((sum<S)&&(flag!=1))
    printf ("NO");
    else if((sum>=S)&&(flag!=1)) {
        sort(N,a,0);
        if (S <a[N-1])
        printf ("NO");
        else
        check(N,S,a); }
    return 0; }