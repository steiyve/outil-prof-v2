#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string* creatList()
{
    static string classe[40];
    int numEleves;
    cout << "Combien d'eleves dans la classe ? ";
    cin >> numEleves;

    for (int i = 0; i < numEleves; i++)
    {
        cout << "Nom de l'eleve " << i + 1 << " : ";
        cin >> classe[i];
    }
    return classe;
}

void saveList(string* classe)
{
    string nomGroupe;
    cout << "Nom du groupe : ";
    cin >> nomGroupe;
    string nomFichier = "var/list" + nomGroupe + ".txt";
    ofstream file(nomFichier, ios::app);
    for (int i = 0; i < 40; i++)
    {
        file << classe[i] << endl;
    }
    file.close();
}