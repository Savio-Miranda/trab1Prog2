package conversores;
import java.util.Scanner;

public class Moedas {
    private Scanner scanner = new Scanner(System.in);
    private float realToDolar(float valor) {
        return valor / 6.09f;
    }

    private float realToEuro(float valor) {
        return valor / 6.33f;
    }

    private float realToLibra(float valor) {
        return valor / 7.66f;
    }

    private float dolarToReal(float valor) {
        return valor / 0.166f;
    }

    private float dolarToLibra(float valor) {
        return valor / 1.27f;
    }

    private float dolarToEuro(float valor) {
        return valor / 1.05f;
    }

    private float euroToReal(float valor) {
        return valor / 0.16f;
    }

    private float euroToDolar(float valor) {
        return valor / 0.95f;
    }

    private float euroToLibra(float valor) {
        return valor / 1.21f;
    }

    private float libraToReal(float valor) {
        return valor / 0.13f;
    }

    private float libraToDolar(float valor) {
        return valor / 0.79f;
    }

    private float libraToEuro(float valor) {
        return valor / 0.83f;
    }

    public void conversor() {
        System.out.println("Quanto você tem?");
        float qte = scanner.nextFloat();

        System.out.println("Qual moeda você tem? ");
        System.out.println("1-Real\n2-Dólar\n3-Euro\n4-Libra");
        int moeda = scanner.nextInt();

        System.out.println("Você deseja converter para qual moeda?");
        System.out.println("1-Dólar\n2-Libra\n3-Euro\n4-Real");
        int convertida = scanner.nextInt();

        switch (moeda) {
            case 1: // Real
                switch (convertida) {
                    case 1:
                        System.out.println("Você receberá " + realToDolar(qte));
                        break;
                    case 2:
                        System.out.println("Você receberá " + realToLibra(qte));
                        break;
                    case 3:
                        System.out.println("Você receberá " + realToEuro(qte));
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
                break;

            case 2: // Dólar
                switch (convertida) {
                    case 1:
                        System.out.println("Você receberá " + dolarToReal(qte));
                        break;
                    case 2:
                        System.out.println("Você receberá " + dolarToLibra(qte));
                        break;
                    case 3:
                        System.out.println("Você receberá " + dolarToEuro(qte));
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
                break;

            case 3: // Euro
                switch (convertida) {
                    case 1:
                        System.out.println("Você receberá " + euroToReal(qte));
                        break;
                    case 2:
                        System.out.println("Você receberá " + euroToLibra(qte));
                        break;
                    case 3:
                        System.out.println("Você receberá " + euroToDolar(qte));
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
                break;

            case 4: // Libra
                switch (convertida) {
                    case 1:
                        System.out.println("Você receberá " + libraToReal(qte));
                        break;
                    case 2:
                        System.out.println("Você receberá " + libraToDolar(qte));
                        break;
                    case 3:
                        System.out.println("Você receberá " + libraToEuro(qte));
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
                break;

            default:
                System.out.println("Opção inválida.");
        }

        //scanner.close();
    }
}