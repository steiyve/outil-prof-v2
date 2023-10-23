#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int creatList() {
    static string classe[40][2];
    string nomGroupe;

    int numEleves;
    cout << "Combien d'eleves dans la classe ? ";
    cin >> numEleves;

    if (numEleves <= 0) {
        cout << "Erreur: le nombre d'eleves doit etre superieur a 0" << endl;
        return -2;
    }

    for (int i = 0; i < numEleves; i++) {
        cout << "Nom de l'eleve " << i + 1 << " : ";
        cin >> classe[i][0];
    }

    cout << "Nom du groupe : ";
    cin >> nomGroupe;
    string nomFichier = "var/list" + nomGroupe + ".txt";

    ofstream file(nomFichier, ios::app);

    if (!file.is_open()) {
        cout << "Erreur lors de l'ouverture du fichier" << endl;
        return -1;
    }

    for (int i = 0; i < numEleves; i++) {
        classe[i][1] = "present";
        file << classe[i][0] << " : " << endl;
    }

    file.close();

    return 0;
}
