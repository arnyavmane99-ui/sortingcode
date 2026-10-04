#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void selectionsort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

void insertion(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int n;
    cout << "enter the nuber of elements in a array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter" << " " << i + 1 << " " << "element";
        cin >> arr[i];
    }

    selectionsort(arr);
    cout << "array is sorted by selection sort:";
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
    cout << "sorting by insertion sort:";
    for (int m : arr)
    {
        cout << m << " ";
    }

    return 0;
}