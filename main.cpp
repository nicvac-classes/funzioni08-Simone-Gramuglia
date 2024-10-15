#include <iostream>

using namespace std;

int innaffia(int umidità) {
    if (umidità == 100) {
        umidità = 100;
        cout << "Livello umidità massimo!" << endl;
    } else {
        umidità = umidità + 10;
    }
    
    return umidità;
}

bool inputCon(string a) {
    bool r;

    if (a == "I") {
        r = true;
    } else {
        if (a == "P") {
            r = true;
        } else {
            if (a == "R") {
                r = true;
            } else {
                if (a == "S") {
                    r = true;
                } else {
                    if (a == "T") {
                        r = true;
                    } else {
                        if (a == "X") {
                            r = true;
                        } else {
                            cout << "Input invalido" << endl;
                            r = false;
                        }
                    }
                }
            }
        }
    }
    
    return r;
}

int pianta(int numPiante) {
    int r, i;

    i = 0;
    if (i == 0) {
        r = numPiante;
    } else {
        r = r + numPiante;
    }
    i = i + 1;
    
    return r;
}

int sole(int umidità) {
    if (umidità == 0) {
        umidità = 0;
        cout << "L'umidità non può scendere più di così!" << endl;
    } else {
        umidità = umidità - 10;
    }
    
    return umidità;
}

int main() {
    cout << "Ciao e benvenuto a Cime di Rapa Craft!" << endl;
    string a;
    int umidità, cap, plants;
    bool input;

    umidità = 0;
    cout << "Seleziona la capacità massima delle piante che si possono piantare" << endl;
    cin >> cap;
    do {
        cout << "Inserire l'azione da compiere: I (innaffia), P (pianta), R (raccogli), S (sole), T (reset giardino), X (esci)" << endl;
        do {
            cin >> a;
            input = inputCon(a);
        } while (input == false);
        if (a == "I") {
            umidità = innaffia(umidità);
            cout << "Livello umidità: " << umidità << "%" << endl;
        } else {
            if (a == "P") {
                cout << "Quante piante vuoi piantare? (Capacità massima: " << cap << ")" << endl;
                cin >> plants;
                plants = pianta(plants);
                if (plants > cap) {
                    cout << "Non puoi piantare tutte queste piante! (limite massimo: " << cap << ")" << endl;
                    plants = pianta(plants);
                }
                cout << "Totale piante: " << plants << endl;
            } else {
                if (a == "R") {
                    cout << "Non ne ho proprio idea" << endl;
                } else {
                    if (a == "S") {
                        cout << "Il sole splende e l'umidità diminuisce!" << endl;
                        umidità = sole(umidità);
                        cout << "Livello umidità: " << umidità << "%" << endl;
                    } else {
                        if (a == "T") {
                            cout << "Non ne ho proprio idea" << endl;
                        }
                    }
                }
            }
        }
    } while (a != "X");
    cout << "Gioco chiuso" << endl;
}