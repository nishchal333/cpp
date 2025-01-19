#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main()
{

    vector<int> arr;
    int n ;
    cout<<"Enter the number of books";
    cin>>n;
    arr.resize(n);
    cout << "Enter the page count for each book: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    cout << endl;
    int m; // number of student
    cout << "Enter number of student";
    cin >> m;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
    return 0;
}
