package conversores;
import java.util.Scanner;

public class Temperaturas {
    private Scanner scanner = new Scanner(System.in);

    private float celsiusToFahrenheit(float temp) {
        return (temp * 1.8f) + 32;
    }

    private float celsiusToKelvin(float temp) {
        return temp + 273.15f;
    }

    private float fahrenheitToCelsius(float temp) {
        return (temp - 32) * 5 / 9;
    }

    private float fahrenheitToKelvin(float temp) {
        return (temp - 32) * 5 / 9 + 273.15f;
    }

    private float kelvinToCelsius(float temp) {
        return temp - 273.15f;
    }

    private float kelvinToFahrenheit(float temp) {
        return (temp - 273.15f) * 1.8f + 32;
    }

    public void conversor() {
        System.out.println("Qual temperatura você quer converter? ");
        System.out.println("1- Celsius\n2- Fahrenheit\n3- Kelvin");
        int caso = scanner.nextInt();

        System.out.println("Quantos graus você quer converter? ");
        float temp = scanner.nextFloat();

        switch (caso) {
            case 1: // Celsius
                System.out.println("Para qual você quer converter? \n1- Fahrenheit\n2- Kelvin");
                int convertidaC = scanner.nextInt();
                if (convertidaC == 1) {
                    System.out.println("A temperatura em Fahrenheit: " + celsiusToFahrenheit(temp));
                } else {
                    System.out.println("A temperatura em Kelvin: " + celsiusToKelvin(temp));
                }
                break;

            case 2: // Fahrenheit
                System.out.println("Para qual unidade você deseja converter? \n1- Celsius\n2- Kelvin");
                int convertidaF = scanner.nextInt();
                if (convertidaF == 1) {
                    System.out.println("A temperatura em Celsius: " + fahrenheitToCelsius(temp));
                } else {
                    System.out.println("A temperatura em Kelvin: " + fahrenheitToKelvin(temp));
                }
                break;

            case 3: // Kelvin
                System.out.println("Para qual unidade você quer converter? \n1- Celsius\n2- Fahrenheit");
                int convertidaK = scanner.nextInt();
                if (convertidaK == 1) {
                    System.out.println("A temperatura em Celsius: " + kelvinToCelsius(temp));
                } else {
                    System.out.println("A temperatura em Fahrenheit: " + kelvinToFahrenheit(temp));
                }
                break;

            default:
                System.out.println("Opção inválida.");
        }
    }
}