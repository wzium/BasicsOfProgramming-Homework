//
// Create a program which finds all the divisors of a given number.
//
package me.michal.assignments.chapter03;

import java.util.Scanner;
import java.util.Vector;

public class Task2 {
    private static void printDivisors(int number) {
        Vector<Integer> vector = new Vector<>();
        for(int i = 1; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                System.out.print(i + " ");
                if (number / i != i)
                    vector.add(number / i);
            }
        }
        for (int i = vector.size() - 1; i >= 0; i--) {
            System.out.print(vector.get(i) + " ");
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number");
        int number = input.nextInt();
        printDivisors(number);
    }
}
