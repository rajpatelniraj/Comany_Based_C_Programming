// Find the Second Smallest and Second Largest element in an Array:

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}




//  2nd Method ;


#include <stdio.h>

int secondSmallest(int a[],int n)
{
    int min = a[0];
    int secondMin = a[1] ;
    for(int i = 0; i < n; i++)     //First-time Array Traversal
    {
       if(a[i] < min)
       {
          secondMin = min;
          min = a[i];
        }
    }
    for(int i = 0; i < n; i++)      //Second-time Array Traversal
{
       if(a[i] < secondMin && a[i] != min)
       {
          secondMin = a[i];
        }
    }
  return secondMin;               //Return the second smallest element
}
int secondLargest(int a[],int n)
{
    int max = a[0];
    int secondMax = a[1] ;
    for(int i = 0; i < n; i++)     //First-time Array Traversal
    {
       if(a[i] > max)
       {
secondMax = max;
          max = a[i];
        }
    }
    for(int i = 0; i < n; i++)     //Second-time Array Traversal
    {
       if(a[i] > secondMax && a[i] != max)
       {
          secondMax = a[i];
        }
    }
  return secondMax;                //Return the second largest element
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                      //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("Invalid Input");
    }
    else
    {
       int sS=secondSmallest(a,n);
       printf("The second smallest element is %d",sS);
       printf("\n");
       int sL=secondLargest(a,n);
       printf("The second largest element is %d",sL);
    }
    return 0;
}



// 3Rd Method


#include <stdio.h>

int secondSmallest(int arr[],int n)
{
    int min = arr[0];
    int second_min = arr[0] ;
    int i;
    for(i = 0; i < n; i++)       //Array Traversal
    {
       if(arr[i] < min)
       {
          second_min = min;
          min = arr[i];
       }
       else if(arr[i] < second_min && arr[i] != min)      //Check for second smallest
       {
          second_min = arr[i];
       }
    }
   return second_min;             //Return second smallest
}
int secondLargest(int arr[],int n)
{
    int i, first, second;
    if (n < 2) {
        printf(" Invalid Input ");
        return;
    }
    first = second =arr[0];        //Array Traversal
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
        }
 
        else if (arr[i] > second && arr[i] != first)      //Check for second largest
        {
            second = arr[i];
        }
    }
    return second;                //Return second largest
}
int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("Invalid Input");
    }
    else
    {
        int sS=secondSmallest(a,n);
        printf("The second smallest element is %d",sS);
        printf("\n");
        int sL=secondLargest(a,n);
        printf("The second largest element is %d",sL);
    }
    return 0;
}
