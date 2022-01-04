//
// Create a game, the goal is to guess the number in range from 1 to 200,
// user is told if the entered number is too low or too high.
//
package me.michal.assignments.chapter03;

import java.util.Scanner;
import java.util.concurrent.ThreadLocalRandom;

public class Task3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int randomNumber = ThreadLocalRandom.current().nextInt(1, 201);
        int guess;
        while (true) {
            System.out.println("Enter the number in range from 1 to 200");
            guess = input.nextInt();
            if (guess > randomNumber)
                System.err.println("The value you entered is too high!");
            else if (guess < randomNumber) {
                System.out.println("The value you entered is too low!");
            }
            else
                break;
        }
        System.out.println("Congratulations, you guessed the number!");
    }
}
