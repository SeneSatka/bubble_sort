#include <stdio.h>
#define ll long long
int main(int, char **)
{
    int n;
    scanf("%d", &n); // Read count of number(n)
    ll int a[n];     // Create an array size of n
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]); // Get array elements(numbers)
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            { // Compare a and a+1. numbers and if a is greater than a+1 swap they.
                ll int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]); // Print sorted array
    }
    // Written by: SeneSatka
}
