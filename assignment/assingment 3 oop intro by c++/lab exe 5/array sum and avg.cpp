#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
