import java.util.Scanner;

public class Polinomio {
    private Scanner scanner = new Scanner(System.in);
    private double a, b, c, x1, x2;

    void calcularRaizes() {
        System.out.print("Considerando o formato ax² + bx + c\n");
        System.out.print("Qual o valor de a? \n");
        a = scanner.nextDouble();

        System.out.print("Qual o valor de b? \n");
        b = scanner.nextDouble();

        System.out.print("Qual o valor de c? \n");
        c = scanner.nextDouble();

        double delta = Math.pow(b, 2) - (4 * a * c);

        if (delta < 0) {
            System.out.println("As raízes são complexas e não podem ser calculadas.");
        } else {
            delta = Math.sqrt(delta);
            x1 = (-b + delta) / (2 * a);
            x2 = (-b - delta) / (2 * a);

            System.out.println("x1: " + x1);
            System.out.println("x2: " + x2);
        }
    }
}