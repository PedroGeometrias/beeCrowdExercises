import java.io.IOException;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        double sal, imp1, imp2, imp3;
        Scanner scan = new Scanner(System.in);
        sal = scan.nextDouble();

        if (sal <= 2000) {
            System.out.println("Isento");
        } else if (sal <= 3000) {
            imp1 = (sal - 2000) * 0.08;
            System.out.printf("R$ %.2f%n", imp1);
        } else if (sal <= 4500) {
            imp1 = 1000 * 0.08;
            imp2 = (sal - 3000) * 0.18;
            System.out.printf("R$ %.2f%n", imp1 + imp2);
        } else {
            imp1 = 1000 * 0.08;
            imp2 = 1500 * 0.18;
            imp3 = (sal - 4500) * 0.28;
            System.out.printf("R$ %.2f%n", imp1 + imp2 + imp3);
        }
    }
}
