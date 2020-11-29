#include <stdio.h>
#include <stdlib.h>
int* connect(int *m1,int *n1,int m,int n)
{
 int *p,cm=0,cn=0;
 p=malloc((m+n)*sizeof(int));
 for (int i=0;i<m+n;i++)
 {
     if (((cm>=m)||(m1[cm]>=n1[cn]))&(cn<n))
     {
         p[i]=n1[cn];
         cn++;
     }
      else if (((cn>=n)||(m1[cm]<n1[cn]))&(cm<m))
     {
         p[i]=m1[cm];
         cm++;
     }
 }
 return p;
}

int main()
{int m,n,*p1,*p2,*p;
printf("Enter 1 array size: \n");
     scanf("%d",&m);
   p1=malloc(m*sizeof(int));
   printf("Enter 1 array: \n");
   for (int i=0;i<m;i++) scanf("%d",&p1[i]);
   printf("Enter 2 array size: \n");
   scanf("%d",&n);
   p2=malloc(n*sizeof(int));
   printf("Enter 2 array: \n");
   for (int i=0;i<n;i++)
     scanf("%d",&p2[i]);
   p=connect(p1,p2,m,n);
   for (int i=0;i<m+n;i++) printf("%d ",p[i]);
return 0;
}
