#include <iostream>
using namespace std;

int main(void)
{
    int arr[9];
    int max, num;
    
    for(int i = 0; i<9; i++)
    {
        cin >> arr[i];
    }
    
    max = arr[0];
    num = 1;
    
    for(int i = 1; i<9; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            num = i+1;
        }
    }
    
    cout << max << endl;
    cout << num << endl;
    return 0;
}
