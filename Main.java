import calculadora.Calculator;
import calculadora.Menu;
import conversores.Massas;
import conversores.Medidas;
import conversores.Moedas;
import conversores.Temperaturas;
import validadorCPF.CPF;

public class Main {
    public static void main(String[] args) throws Exception {
        Moedas moedas = new Moedas();
        Medidas medidas = new Medidas();
        Massas massas = new Massas();
        Temperaturas temperaturas = new Temperaturas();

        moedas.conversor();
        medidas.conversor();
        temperaturas.conversor();
        massas.conversor();

        Polinomio polinomio = new Polinomio();
        polinomio.calcularRaizes();

        CPF cpf = new CPF("47666286325");
        System.out.println(cpf.getCPF());
        
        Calculator calculator = new Calculator();
        Menu menu = new Menu(calculator);
        menu.operation();
    }
}
