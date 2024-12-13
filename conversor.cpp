#include <iostream>
using namespace std;

class moeda {
private:
    float valor;

    float realDolar() {
        return valor / 6;
    }

    float realEuro() {
        return valor / 6.33;
    }

    float realLibra() {
        return valor / 7.66;
    }

    float dolarReal() {
        return valor / 0.17;
    }

    float dolarLibra() {
        return valor / 1.27;
    }

    float dolarEuro() {
        return valor / 1.05;
    }

    float euroReal() {
        return valor / 0.16;
    }

    float euroDolar() {
        return valor / 0.95;
    }

    float euroLibra() {
        return valor / 1.21;
    }

    float libraReal() {
        return valor / 0.13;
    }

    float libraDolar() {
        return valor / 0.79;
    }

    float libraEuro() {
        return valor / 0.83;
    }

public:
    // real, dólar, euro e libra
    float valor;
    int moeda;

    void converter() {
        cout << "Quanto você tem?" << endl;
        cin >> valor;

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
                cout << "Você receberá " << realDolar() << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << realLibra() << endl;
            } else {
                cout << "Você receberá " << realEuro() << endl;
            }
            break;

        case 2: // dólar
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Libra\n"
                 << "3-Euro" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << dolarReal() << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << dolarLibra() << endl;
            } else {
                cout << "Você receberá " << dolarEuro() << endl;
            }
            break;

        case 3: // euro
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Libra\n"
                 << "3-Dólar" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << euroReal() << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << euroLibra() << endl;
            } else {
                cout << "Você receberá " << euroDolar() << endl;
            }
            break;

        case 4: // libra
            cout << "Você deseja converter para qual moeda?" << endl;
            cout << "1-Real\n"
                 << "2-Dólar\n"
                 << "3-Euro" << endl;

            cin >> convertida;
            if (convertida == 1) {
                cout << "Você receberá " << libraReal() << endl;
            } else if (convertida == 2) {
                cout << "Você receberá " << libraDolar() << endl;
            } else {
                cout << "Você receberá " << libraEuro() << endl;
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
