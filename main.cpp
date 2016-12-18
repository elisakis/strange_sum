#include <iostream>

using namespace std;

int strange_sum(int l, int arr[])
{
    int c = l/2;  //center

    if (l == 0)
        return 0;

    if (l == 1)
        return arr[0];
    else
    {
        int* p1 = arr;  //pointer to 0 element
        int* p2 = p1+c; //pointer to C element

        int r1 = strange_sum(c, p1);
        int r2 = strange_sum(l-c, p2);
        return (r1 + r2);
    }
}


int main()
{
    int l = 7;
    int arr[l];

    for (int i=0; i < l; i++)
        cin >> arr[i];

    cout << strange_sum(l, arr);
}
