package conversores;
import java.util.Scanner;

public class Medidas {
    private Scanner scan = new Scanner(System.in);
    private float mCm(float valor) {
        return valor * 100;
    }

    private float mMm(float valor) {
        return valor * 1000;
    }

    private float mFt(float valor) {
        return valor * 3.28084f;
    }

    private float mIn(float valor) {
        return valor * 39.3701f;
    }

    private float cmM(float valor) {
        return valor / 100;
    }

    private float cmMm(float valor) {
        return valor * 10;
    }

    private float mmM(float valor) {
        return valor / 1000;
    }

    private float mmCm(float valor) {
        return valor / 10;
    }

    private float ftM(float valor) {
        return valor / 3.28084f;
    }

    private float ftIn(float valor) {
        return valor * 12;
    }

    private float inM(float valor) {
        return valor / 39.3701f;
    }

    private float inFt(float valor) {
        return valor / 12;
    }

    public void conversor() {
        System.out.print("Digite o valor da medida: ");
        float valor = scan.nextFloat();

        System.out.println("Selecione a unidade de origem:");
        System.out.println("1 - Metro");
        System.out.println("2 - Centimetro");
        System.out.println("3 - Milimetro");
        System.out.println("4 - Pe");
        System.out.println("5 - Polegada");

        int origem = scan.nextInt();

        switch (origem) {
            case 1: // Metro
                System.out.println("De Metro para Centimetro: " + mCm(valor) + " cm");
                System.out.println("De Metro para Milimetro: " + mMm(valor) + " mm");
                System.out.println("De Metro para Pe: " + mFt(valor) + " ft");
                System.out.println("De Metro para Polegada: " + mIn(valor) + " in");
                break;

            case 2: // Centimetro
                System.out.println("De Centimetro para Metro: " + cmM(valor) + " m");
                System.out.println("De Centimetro para Milimetro: " + cmMm(valor) + " mm");
                System.out.println("De Centimetro para Pe: " + mFt(cmM(valor)) + " ft");
                System.out.println("De Centimetro para Polegada: " + mIn(cmM(valor)) + " in");
                break;

            case 3: // Milimetro
                System.out.println("De Milimetro para Metro: " + mmM(valor) + " m");
                System.out.println("De Milimetro para Centimetro: " + mmCm(valor) + " cm");
                System.out.println("De Milimetro para Pe: " + mFt(mmM(valor)) + " ft");
                System.out.println("De Milimetro para Polegada: " + mIn(mmM(valor)) + " in");
                break;

            case 4: // Pe
                System.out.println("De Pe para Metro: " + ftM(valor) + " m");
                System.out.println("De Pe para Centimetro: " + mCm(ftM(valor)) + " cm");
                System.out.println("De Pe para Milimetro: " + mMm(ftM(valor)) + " mm");
                System.out.println("De Pe para Polegada: " + ftIn(valor) + " in");
                break;

            case 5: // Polegada
                System.out.println("De Polegada para Metro: " + inM(valor) + " m");
                System.out.println("De Polegada para Centimetro: " + mCm(inM(valor)) + " cm");
                System.out.println("De Polegada para Milimetro: " + mMm(inM(valor)) + " mm");
                System.out.println("De Polegada para Pe: " + inFt(valor) + " ft");
                break;

            default:
                System.out.println("Opção inválida!");
                break;
        }
    }
}
