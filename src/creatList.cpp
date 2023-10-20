#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string* creatList()
{
    static string classe[40];
    string nomGroupe;

    int numEleves;
    cout << "Combien d'eleves dans la classe ? ";
    cin >> numEleves;

    for (int i = 0; i < numEleves; i++)
    {
        cout << "Nom de l'eleve " << i + 1 << " : ";
        cin >> classe[i];
    }
    for (int i = 0; i < numEleves; i++)
    {
        cout << classe[i] << endl;
    }

    cout << "Nom du groupe : ";
    cin >> nomGroupe;
    string nomFichier = "var/list" + nomGroupe + ".txt";

    ofstream file;
    file.open(nomFichier, ios::app);
    for (int i = 0; i < numEleves; i++)
    {
        file << classe[i] << endl;
    }
    
    return classe;
}
