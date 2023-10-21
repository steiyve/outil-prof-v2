#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void creatList(){
    static string classe[40][2];
    string nomGroupe;


    int numEleves;
    cout << "Combien d'eleves dans la classe ? ";
    cin >> numEleves;

    for (int i = 0; i < numEleves; i++){
        cout << "Nom de l'eleve " << i + 1 << " : ";
        cin >> classe[i][0];
    }

    cout << "Nom du groupe : ";
    cin >> nomGroupe;
    string nomFichier = "var/list" + nomGroupe + ".txt";

    ofstream file;
    file.open(nomFichier, ios::app);
    for (int i = 0; i < numEleves; i++){
        classe[i][1] = "present";
        file << classe[i][0] << " : " << endl;
    }
    
}


