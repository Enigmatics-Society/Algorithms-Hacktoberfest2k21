
// Added by: Arjun Dagar

// Analysis:-

//  ***Time complexity: O(nlogn)
//  ***Stable: Yes
//  ***Adaptive: NO

#include <iostream>
#include <limits>
using namespace std;

//              Function of logic of Merging

void merge(int arr[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int temp[h + 1];

    while (i <= m && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i<=m)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for(int i=l; i<=h; i++)
    {
        arr[i] = temp[i];
    }
}

//              Function for Sorting array

void M(int b[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        M(b, l, m);
        M(b, m + 1, h);
        merge(b, l, m, h);
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value of " << i << " index: ";
        cin >> arr[i];
    }

    //           Calling Sorting function

    M(arr, 0, n-1);

    //              Printing sorted array

    cout << "Array after sorting in descending order is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}