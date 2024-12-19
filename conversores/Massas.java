package conversores;
import java.util.Scanner;

public class Massas {
    private Scanner scanner = new Scanner(System.in);

    private float kgToG(float m) {
        return m / 0.001f;
    }

    private float kgToLb(float m) {
        return m * 2.20f;
    }

    private float gToKg(float m) {
        return m / 1000f;
    }

    private float gToLb(float m) {
        return m / 453.59f;
    }

    private float lbToKg(float m) {
        return m / 2.20f;
    }

    private float lbToG(float m) {
        return m * 453.59f;
    }

    public void conversor() {
        System.out.println("Qual unidade você quer converter?\n" +
                "1- Gramas\n" +
                "2- Kg\n" +
                "3- lb");
        int unidade = scanner.nextInt();

        System.out.println("Quanto você deseja converter?");
        float qte = scanner.nextFloat();

        switch (unidade) {
            case 1: // Gramas
                System.out.println("A massa em kg é: " + gToKg(qte));
                System.out.println("A massa em lb é: " + gToLb(qte));
                break;

            case 2: // Kg
                System.out.println("A massa em g é: " + kgToG(qte));
                System.out.println("A massa em lb é: " + kgToLb(qte));
                break;

            case 3: // lb
                System.out.println("A massa em g é: " + lbToG(qte));
                System.out.println("A massa em kg é: " + lbToKg(qte));
                break;

            default:
                System.out.println("Opção inválida.");
        }
    }
}
