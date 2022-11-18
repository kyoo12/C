#include <stdio.h>

int main()
{
    int i,j,n,t;
    printf("enter num of elaments");
    scanf("%d",&n);
    int a[n];
    printf("enter nums");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i <n; i++)
     {
      for ( j = 0; j <n-1-i; j++)
      {
        if (a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
      }
    }
    
    printf("asending order of a given num is \n");

    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
}