#include<stdio.h>
void Insertion_Sort(int a[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
      {
      item = a[i];
      j= i-1;


        while(j>=0 && a[j] > item)
        {
            a[j+1]=a[j];
            j=j-1;



            }
            a[j+1]=item;
        }
    }

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Insertion_Sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
