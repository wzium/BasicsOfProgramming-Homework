//
// Create a program which calculates the speed of a car from mph to kph.
//
package me.michal.assignments.chapter02;

import java.util.Scanner;

public class Task3 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Enter the miles per hour value.");
        float mph = input.nextFloat();
        double kmh = 1.609344*mph;
        System.out.println(mph+" mph equals " + kmh + " kph.");
    }
}
