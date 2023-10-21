#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int prisePresence()
{
    string nomGroupe;
    string classe[40][2];

    cout << "Nom du groupe : ";
    cin >> nomGroupe;

    string nomFichier = "var/list" + nomGroupe + ".txt";
    ifstream file(nomFichier);

    if (!file.is_open()) {
        cout << "Erreur lors de l'ouverture du fichier" << endl;
        return -1;
    }

    string line;
    int pos = 0;

    while (getline(file, line)) {
        if (pos >= 40) {
            cout << "Erreur: trop d'eleves dans la liste" << endl;
            return -2;
        }

        classe[pos][0] = line;
        cout << line << "\n Absent ? (oui/non) : ";

        string etatEleve;
        cin >> etatEleve;

        while (etatEleve != "oui" && etatEleve != "non") {
            cout << "Erreur, veuillez repondre par oui ou non" << endl;
            cin >> etatEleve;
        }

        classe[pos][1] = (etatEleve == "oui") ? "absent" : "present";
        pos++;
    }

    file.close();

    ofstream file2(nomFichier);

    if (!file2.is_open()) {
        cout << "Erreur lors de l'ouverture du fichier" << endl;
        return -1;
    }

    for (int i = 0; i < pos; i++) {
        file2 << classe[i][0] << classe[i][1] << endl;
    }

    file2.close();
    
    return 0;
}