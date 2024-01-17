import java.io.IOException;
import java.util.Scanner;

public class Main {
    private static Scanner scan;

    public static void main(String[] args) {
        scan = new Scanner(System.in);

        String input1 = scan.nextLine().toLowerCase();
        String input2 = scan.nextLine().toLowerCase();
        String input3 = scan.nextLine().toLowerCase();

        if (input1.equals("vertebrado")) {
            System.out.println(vertebrado(input2, input3));
        } else if (input1.equals("invertebrado")) {
            System.out.println(invertebrado(input2, input3));
        } else {
            System.out.println("Invalid input");
        }

        scan.close();
    }

    private static String vertebrado(String input2, String input3) {
        switch (input2) {
            case "ave":
                return input3.equals("carnivoro") ? "aguia" : "pomba";
            case "mamifero":
                return input3.equals("onivoro") ? "homem" : "vaca";
            default:
                return "Invalid input";
        }
    }

    private static String invertebrado(String input2, String input3) {
        switch (input2) {
            case "inseto":
                return input3.equals("hematofago") ? "pulga" : "lagarta";
            case "anelideo":
                return input3.equals("onivoro") ? "minhoca" : "sanguessuga";
            default:
                return "Invalid input";
        }
    }
}

