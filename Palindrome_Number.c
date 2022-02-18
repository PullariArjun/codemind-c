#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n],i,a,b,d,s;
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       d=arr[i];
       s=0;
       while(arr[i]>0)
       {
         a=arr[i]%10;
         s=s*10+a;
         arr[i]=arr[i]/10;
       }
       if(s==d)
       {
           printf("True
");
       }
       else
       {
           printf("False
");
       }
   }

   
}