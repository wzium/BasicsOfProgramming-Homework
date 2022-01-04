//
// Create a program which prints Christmas Tree with height determined by the user.
//
// For example
//
//     *
//    ***
//   *****
//  *******
// *********
//
package me.michal.assignments.lab02;

import java.util.Scanner;

public class Task1 {

    public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
        System.out.println("Enter desired tree height");
        int number = input.nextInt();
        input.close();
        for(int i = 0; i < number; i++) {
            for(int j = 1; j < number-i; j++) {
                System.out.print(" ");
            }
            for(int k = 0; k <= i*2; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
