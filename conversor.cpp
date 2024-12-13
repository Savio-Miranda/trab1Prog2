#include <iostream>
using namespace std;

class moeda {
private:

    float realDolar(float valor) {
        return valor / 6.09;
    }

    float realEuro(float valor) {
        return valor / 6.33;
    }

    float realLibra(float valor) {
        return valor / 7.66;
    }

    float dolarReal(float valor) {
        return valor / 0.166;
    }

    float dolarLibra(float valor) {
        return valor / 1.27;
    }

    float dolarEuro(float valor) {
        return valor / 1.05;
    }

    float euroReal(float valor) {
        return valor / 0.16;
    }

    float euroDolar(float valor) {
        return valor / 0.95;
    }

    float euroLibra(float valor) {
        return valor / 1.21;
    }

    float libraReal(float valor) {
        return valor / 0.13;
    }

    float libraDolar(float valor) {
        return valor / 0.79;
    }

    float libraEuro(float valor) {
        return valor / 0.83;
    }

public:
    // real, dólar, euro e libra
    float qte;
    int moeda;

    void converter() {
        cout << "Quanto você tem?" << endl;
        cin >> qte;

        cout << "Qual moeda você tem? " << endl;
        cout << "1-Real" << endl;
        cout << "2-Dólar" << endl;
        cout << "3-Euro" << endl;
        cout << "4-Libra" << endl;
        cin >> moeda;

        switch (moeda) {
        case 1: // real
            int convertida;
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Dólar\n"
                 << "2-Libra\n"
                 << "3-Euro" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << realDolar(qte) << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << realLibra(qte) << endl;
            } else {
                cout << "Você receberá " << realEuro(qte) << endl;
            }
            break;

        case 2: // dólar
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Libra\n"
                 << "3-Euro" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << dolarReal(qte) << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << dolarLibra(qte) << endl;
            } else {
                cout << "Você receberá " << dolarEuro(qte) << endl;
            }
            break;

        case 3: // euro
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Libra\n"
                 << "3-Dólar" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << euroReal(qte) << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << euroLibra(qte) << endl;
            } else {
                cout << "Você receberá " << euroDolar(qte) << endl;
            }
            break;

        case 4: // libra
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Dólar\n"
                 << "3-Euro" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << libraReal(qte) << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << libraDolar(qte) << endl;
            } else {
                cout << "Você receberá " << libraEuro(qte) << endl;
            }
            break;
        }
    }
};

int main() {
    moeda conversor;
    conversor.converter();
    return 0;
}
