//
// Create a program which asks to enter the number in a loop to the moment when the 5 is entered.
//
package me.michal.assignments.chapter03;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Task4 {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        int number;
        int product = 1;
        while (true) {
            System.out.println("Enter the number");
            number = input.nextInt();
            if (number == 5)
                break;
            else
                list.add(number);
        }
        for (Integer i : list)
            product *= i;
        System.out.println(product);
    }
}
