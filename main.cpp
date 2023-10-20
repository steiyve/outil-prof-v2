#include <iostream>
#include "src/creatList.cpp"

using namespace std;

int main()
{
    string* classe = creatList();
    for (int i = 0; i < 40; i++)
    {
        cout << classe[i] << endl;
    }
    saveList(classe);

    cout << "Hello World!" << endl;
    return 0;
}