#include <stdio.h>
int main()
        { int h;int p;int i;int flag=0;
          scanf("%d",&h);
          scanf("\n%d",&p);
          int a[p];
          for(i=0;i<p;i++) {
                scanf("%d",&a[i]); }
            for(i=0;i<(p-1);i++) {
                if(a[i+1]<a[i]) {
                        h=h-(a[i]-a[i+1]); }
                if(h<=0) {
                        flag=1;
                        break; } }
            if(flag==1)
            printf("No");
            else
            printf("Yes");
    return 0; }