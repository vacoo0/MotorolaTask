#include <iostream>
#include <limits>
#include "fence.h"
using namespace std;

int main()
{
    int meters;
    string start;
    cin >> start;
    if (start == "RUN")
    {
        cout << "How much meters of fence is available? " << endl;
        while (!(cin >> meters)||(meters<3))
        {
            cout << "ERROR: It must be a number greater than 2: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Fence fence(meters);
        fence.show();
    }

    return 0;
}
