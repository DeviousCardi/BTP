#include<stdio.h>
int main() {
    int n;
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
    int Maxtill[1000];
    for(int i=0;i<n;i++)
     {Maxtill[i]=1;
      for(int j=0;j<i;j++)
       {if(a[i]>a[j])
         {if(Maxtill[j]>Maxtill[i])
           {Maxtill[i]=1+Maxtill[j];} } } }
     int large=a[0];
     for(int i=0;i<n;i++)
      {if(a[i]>large)
        {large=a[i];} }
     printf("%d",large);
    return 0; }