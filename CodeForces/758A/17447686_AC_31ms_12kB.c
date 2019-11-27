#include<stdio.h>

int largest(int arr[], int n)
{
    int i;

    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}


int main()
{

   int n;

   scanf("%d",&n);

       int num[n];
   for (int i=0;i<n ;i++ )
   {
       scanf("%d",&num[i]);
   }

    int maxv=largest(num,n);
    int sum=0;
    for (int i=0;i<n ;i++ )
    {
        sum+=(maxv-num[i]);
    }
    printf("%d\n",sum);


  return 0;
}
