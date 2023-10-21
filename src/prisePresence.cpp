#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void prisePresence()
{
    string absance;
    string nomGroupe;
    string etatEleve;
    string classe[40][2];

    cout << "Nom du groupe : ";
    cin >> nomGroupe;

    string nomFichier = "var/list" + nomGroupe + ".txt";
    ifstream file;
    file.open(nomFichier, ios::in);
    string line;

    int pos = 0;
    while (getline(file, line)) {

        classe[pos][0] = line;
        cout << line << "\n Absent ? (oui/non) : ";
        cin >> etatEleve;

        if (etatEleve == "oui"){
            etatEleve = "absent";
        }
        else if (etatEleve == "non"){
            etatEleve = "present";
        }
        else{
            cout << "Erreur, veuillez repondre par oui ou non" << endl;
            cin >> etatEleve;
        }
        
        classe[pos][1] = etatEleve;
        pos++;
    }
    file.close();


    ofstream file2;
    file2.open(nomFichier, ios::trunc);
    for (int i = 0; i < pos; i++){
        file2 << classe[i][0] << classe[i][1] << endl;

    }
    file2.close();

}