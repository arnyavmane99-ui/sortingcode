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

int main()
{
    int n;
    cout << "enter the nuber of elements in a array:";
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"element";
        cin >> arr[i];
    }

    selectionsort(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}