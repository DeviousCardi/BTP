#include<stdio.h>
    int max(int Maxtill[],int s) {
        int ch,Max;
        int count=0;
        ch=getchar();
        mx=ch;
        while(count<s) {
            Maxtill[count]=ch;
            ch=getchar();
            if(mx<b[count])
              mx=b[count];
            count=count+1; }
        return mx; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    int Maxtill[n];
    for(int i=0;i<n;i++) {
         int j;
         for(j=0;j<i;j++) {
               if(a[i]<a[j])
                break; }
          if(j==i-1)
          Maxtill[i]=1+max(Maxtill[],i);
          else
          Maxtill[i]=1; }
    int p=max(Maxtill,n);
    printf("%d",p);
    return 0; }