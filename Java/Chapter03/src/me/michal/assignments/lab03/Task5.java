//
// Create a program which prints every value of the power of 3 smaller than the entered number.
//
package me.michal.assignments.lab03;

import java.util.Scanner;

import static java.lang.Math.pow;

public class Task5 {
    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the non-negative integer");
        number = input.nextInt();
        if (number <= 0)
            System.err.println("Vrong value!");
        else {
            for (int i = 1; pow(3, i) < number; i++) {
                System.out.println(pow(3, i));
            }
        }
    }
}
