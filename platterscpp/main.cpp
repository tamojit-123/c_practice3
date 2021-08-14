#include <iostream>

using namespace std;

int main()
{
    int  speed;
    cout << "enter 33, 45, or 78: ";
    cin >> speed;
    switch(speed)
    {
    case 33:
        cout << "THIRTY THREE";
        break;
    case 45:
        cout << "FORTY FIVE";
        break;
    case 78:
        cout << "SEVENTY EIGHT";
        break;
    }
    return 0;
}
