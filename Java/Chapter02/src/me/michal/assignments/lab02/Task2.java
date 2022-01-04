//
// Create the program which calculates quadratic equation using a, b and c variables determined by the user.
//
package me.michal.assignments.lab02;

import java.util.Scanner;
import java.lang.Math;

public class Task2 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the first value");
        int a = input.nextInt();
        System.out.println("Enter the second value");
        int b = input.nextInt();
        System.out.println("Enter the third value");
        int c = input.nextInt();
        input.close();
        double delta = (Math.pow(b, 2)) - 4*a*c;
        System.out.println("The value of delta equals " + delta);
        double x1 = (-b + Math.sqrt(delta))/(2*a);
        double x2 = (-b - Math.sqrt(delta))/(2*a);
        System.out.println("x1 equals " + x1 + " and x2 equals " + x2);
    }
}
