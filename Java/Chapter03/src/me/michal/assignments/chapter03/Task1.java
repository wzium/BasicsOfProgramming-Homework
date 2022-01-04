//
// Create a program which asks to enter the number
// and then calculates the ratio of the average value of odd numbers to the average value of even numbers,
// it should also check if the number is prime.
//
// For example, entered number 45678 is split to [4, 5, 6, 7, 8]
// and then the calculations are performed using those single numbers
//
package me.michal.assignments.chapter03;

import java.util.*;

public class Task1 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        List<Integer> even = new ArrayList<>();
        List<Integer> odd = new ArrayList<>();
        while (true) {
            try {
                System.out.println("Enter the number");
                int number = input.nextInt();
                checkPrime(number);
                String[] arr = Integer.toString(number).split("");
                for (String digit : arr) {
                    if (Integer.parseInt(digit) % 2 != 0)
                        odd.add(Integer.parseInt(digit));
                    else
                        even.add(Integer.parseInt(digit));
                }
                break;
            } catch (InputMismatchException exception) {
                System.err.println("Wrong value!");
            }
        }
        System.out.println("Odd numbers: " + odd);
        System.out.println("Even numbers: " + even);
    }

    private static void checkPrime(int number) {
        int i;
        int m = number / 2;
        int flag = 0;
        if (number == 0 || number == 1)
            System.out.println(number + " is not a prime number");
        else {
            for (i = 2; i <= m; i++) {
                if (number % i == 0) {
                    System.out.println(number + " is not a prime number");
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                System.out.println(number + " is a prime number");
        }
    }
}