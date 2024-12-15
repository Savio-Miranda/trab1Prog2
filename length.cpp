#include <iostream>
using namespace std;

class ConversorMedidas {
private:
    float mCm(float valor) {
        return valor * 100;
    }

    float mMm(float valor) {
        return valor * 1000;
    }

    float mFt(float valor) {
        return valor * 3.28084;
    }

    float mIn(float valor) {
        return valor * 39.3701;
    }

    float cmM(float valor) {
        return valor / 100;
    }

    float cmMm(float valor) {
        return valor * 10;
    }

    float mmM(float valor) {
        return valor / 1000;
    }

    float mmCm(float valor) {
        return valor / 10;
    }

    float ftM(float valor) {
        return valor / 3.28084;
    }

    float ftIn(float valor) {
        return valor * 12;
    }

    float inM(float valor) {
        return valor / 39.3701;
    }

    float inFt(float valor) {
        return valor / 12;
    }

public:
    void conversor() {
        int origem;
        float valor;

        cout << "Digite o valor da medida: ";
        cin >> valor;

        cout << "Selecione a unidade de origem:" << endl;
        cout << "1 - Metro\n2 - Centimetro\n3 - Milimetro\n4 - Pe\n5 - Polegada" << endl;
        cin >> origem;

        switch (origem) {
            case 1: // Metro
                cout << "De Metro para Centimetro: " << mCm(valor) << " cm" << endl;
                cout << "De Metro para Milimetro: " << mMm(valor) << " mm" << endl;
                cout << "De Metro para Pe: " << mFt(valor) << " ft" << endl;
                cout << "De Metro para Polegada: " << mIn(valor) << " in" << endl;
                break;

            case 2: // Centimetro
                cout << "De Centimetro para Metro: " << cmM(valor) << " m" << endl;
                cout << "De Centimetro para Milimetro: " << cmMm(valor) << " mm" << endl;
                cout << "De Centimetro para Pe: " << ftM(cmM(valor)) << " ft" << endl;
                cout << "De Centimetro para Polegada: " << ftIn(cmM(valor)) << " in" << endl;
                break;

            case 3: // Milimetro
                cout << "De Milimetro para Metro: " << mmM(valor) << " m" << endl;
                cout << "De Milimetro para Centimetro: " << mmCm(valor) << " cm" << endl;
                cout << "De Milimetro para Pe: " << ftM(mmM(valor)) << " ft" << endl;
                cout << "De Milimetro para Polegada: " << ftIn(mmM(valor)) << " in" << endl;
                break;

            case 4: // Pe
                cout << "De Pe para Metro: " << ftM(valor) << " m" << endl;
                cout << "De Pe para Centimetro: " << mCm(ftM(valor)) << " cm" << endl;
                cout << "De Pe para Milimetro: " << mMm(ftM(valor)) << " mm" << endl;
                cout << "De Pe para Polegada: " << ftIn(valor) << " in" << endl;
                break;

            case 5: // Polegada
                cout << "De Polegada para Metro: " << inM(valor) << " m" << endl;
                cout << "De Polegada para Centimetro: " << mCm(inM(valor)) << " cm" << endl;
                cout << "De Polegada para Milimetro: " << mMm(inM(valor)) << " mm" << endl;
                cout << "De Polegada para Pe: " << inFt(valor) << " ft" << endl;
                break;
        }
    }
};

int main() {
    ConversorMedidas conversor;
    conversor.conversor();
    return 0;
}
