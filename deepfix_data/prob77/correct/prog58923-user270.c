#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int money[n];
    int temp,a,b,i=0,l=0, maxi, mini;
    while (i<n) {
        scanf("%d",&money[i]);
        i++; }
    i=1;
    int max=money[0], min=money[0];
    while (i<n) {
        if ((max)<(money[i]))
           max = money[i];
        i++; }
    l=1;
    while (l<n) {
        if (min>money[l]){
            min = money[l]; }
        l++; }
    i=0;
    while (i<n)
      { if (max==money[i])
        {money[i]=min;}
        else if(min==money[i])
        {money[i]=max;}
        i++; }
    i=0;
    while (i<n)
   {   printf("%d ",money[i]);
      i++; }
    printf("end");
    return 0; }