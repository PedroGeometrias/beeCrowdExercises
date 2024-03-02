import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int grenais = 0;
        int interWins = 0;
        int gremioWins = 0;
        int draws = 0;

        int option;

        do {
            int interGoals = scanner.nextInt();
            int gremioGoals = scanner.nextInt();

            grenais++;

            if (interGoals > gremioGoals) {
                interWins++;
            } else if (gremioGoals > interGoals) {
                gremioWins++;
            } else {
                draws++;
            }

            System.out.println("Novo grenal (1-sim 2-nao)");
            option = scanner.nextInt();

        } while (option == 1);

        scanner.close();

        System.out.println(grenais + " grenais");
        System.out.println("Inter:" + interWins);
        System.out.println("Gremio:" + gremioWins);
        System.out.println("Empates:" + draws);

        if (interWins > gremioWins) {
            System.out.println("Inter venceu mais");
        } else if (gremioWins > interWins) {
            System.out.println("Gremio venceu mais");
        } else {
            System.out.println("Não houve vencedor");
        }
    }
}

