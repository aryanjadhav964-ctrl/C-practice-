#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; //already stored array
    int target = 40;

    int low = 0, high = 4, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) /2;

        if (arr[mid] == target)
        {
            cout << "Element found at position : " << mid+1;
            found = 1;
            break;
        }
        else if (arr[mid] < target) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    } 

    if (found == 0)
    {
        cout << "Element not found";
    }

    return 0;

}