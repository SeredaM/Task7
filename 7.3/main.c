#include <stdio.h>
#include <stdlib.h>

void del(int *p, int k, int n)
{

    for (;k<n-1;k++)
    {
        p[k]=p[k+1];
    }
    p[n-1]=0;
    return 0;
}
int main()
{
    int *p,n,t;
    printf("Enter array size: \n");
    scanf("%d", &n);
    p=malloc(sizeof(int)*n);
    printf("Enter array: \n");
    for (int i=0; i<n; i++) scanf("%d", &p[i]);
    for (int i=0; i<n-1; i++)
    {
      for(int k=i+1;k<n;k++)
      {
          if ((p[k]==p[i])&&(p[i]!=0))
          {
              del(p,k,n);
              k--;
          }
      }
    }
    for (int i=0;i<n;i++) printf("%d ",p[i]);
        return 0;


}
