#include <iostream>
#include "src/creatList.cpp"
#include "src/prisePresence.cpp"
#include <string>

using namespace std;

int main()
{
    if (!creatList()){
        return -1;
    }

    if (!prisePresence()){
        return -1;
    }
    

    cout << "Hello World!" << endl;
    return 0;
}