import java.util.ArrayList;
import java.util.Scanner;

public class teamOlympiad {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: number of children
        int n = scanner.nextInt();

        // Lists to store indices of students with different skills
        ArrayList<Integer> programmers = new ArrayList<>();
        ArrayList<Integer> mathematicians = new ArrayList<>();
        ArrayList<Integer> peStudents = new ArrayList<>();

        // Input: skills of each student
        for (int i = 1; i <= n; i++) {
            int skill = scanner.nextInt();
            if (skill == 1)
                programmers.add(i); // Programmers
            else if (skill == 2)
                mathematicians.add(i); // Mathematicians
            else if (skill == 3)
                peStudents.add(i); // PE Students
        }

        // Calculate the number of teams we can form
        int numberOfTeams = Math.min(programmers.size(),
                Math.min(mathematicians.size(), peStudents.size()));

        // Output the number of teams
        System.out.println(numberOfTeams);

        // Print the teams
        for (int i = 0; i < numberOfTeams; i++) {
            System.out.println(programmers.get(i) + " "
                    + mathematicians.get(i) + " "
                    + peStudents.get(i));
        }

        scanner.close();
    }
}
