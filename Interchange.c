//Interchange largest and smallest elements//
#include <conio.h>
int main()
{
    int arr[20], n, i, temp;
    printf("Enter the num of elements you want in the array");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
printf("Enter the element");
scanf("%d", &arr[i]);
    }
    n=n+1;
    for(i=1; i<=n/2; i++)
    {
temp = arr[n-i];
arr[n-1]= arr[i];
arr[i]=temp;
    }

    for(i=1; i<=n-1; i++)
    {
printf("%d\t", arr[i]);
    }
return 0;
}
