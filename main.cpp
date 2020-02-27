//Chat
#include <iostream>
using namespace std;
int main() {
    char answer;
    cout << "Hello.\n";
    do {
        cout << "Are you having a good day? (y/n): ";
        cin >> answer;
    } while (!(answer == 'y') && !(answer == 'n'));

    if (answer == 'y')
    {
        cout << "I am glad to hear that.";
    }
    else if (answer == 'n')
    {
        cout << "I am sorry to hear that.";
    }
    return 0;
}
