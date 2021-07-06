#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 3;
  int w;
  int a;
  int t;
  int m;
  for (int i=0;i<n;i++)
     a[i]=i+1;
  for (int j=0;j<m;j++)
  {
   w=rand()%(n-i)+i;
   t=a[i];
    a[i]=a[w];
     a[w]=t;
     printf("%i\n", t );
  }
  return 0;
}
