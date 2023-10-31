#include <iostream>
#include "src/creatList.cpp"
#include "src/prisePresence.cpp"
#include <string>

using namespace std;

void print(){
    string listeCommandes[3] = {"presence", "creer un groupe", "quitter"};
    for (int i = 0; i < 3; i++){
        cout << i+1 << " : " << listeCommandes[i] << endl;
    }
    cout << "Votre choix : \n";
}

int main()
{
    int choix;
    bool run = true;
    cout << "Bienvenue dans le programme d'aide au prof" << endl;
    
    while (run){

        cout << "Que voulez-vous faire ?" << endl;
        print();
        cin >> choix;
        if (choix == 1){
            prisePresence();
        }
        else if (choix == 2){
            creatList();
        }
        else if (choix == 3){
            return 0;
        }
        else{
            cout << "Erreur: le choix doit etre compris entre 1 et 3" << endl;
            print();
            cin >> choix;
        }

    }
    cout << "Hello World!" << endl;
    return 0;
}