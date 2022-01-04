//
// Create a program which calculates the installments for the car, including interest and paid-in equity.
//
// The max price of a car is 300.000, installment limit is 96 and interest equals:
// 1-24 months: 2%
// 25-48 months: 3%
// 49-60 months: 4%
// 61-72 months: 5%
// 73-96 months: 6%
//
package me.michal.assignments.lab02;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Task6 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int price;
        int payment;
        int installments;
        while (true) {
            try {
                System.out.println("Enter the cars price");
                price = input.nextInt();
                System.out.println("How much do you want to pay now?");
                payment = input.nextInt();
                System.out.println("In how many installments will you play?");
                installments = input.nextInt();
                if ((price - payment)>300000 || payment>=price || installments > 96)
                    throw new InputMismatchException();
                break;
            }
            catch (InputMismatchException exception) {
                System.out.println("Wrong value!");
                input.next();
            }
        }
        System.out.println(calculate(price-payment, installments));
    }
    private static double calculate(int value, int installments) {
        if (installments > 0 && installments <= 24)
            return (value * 1.02)/installments;
        else if (installments >= 25 && installments <= 48)
            return (value * 1.03)/installments;
        else if (installments >= 49 && installments <= 60)
            return (value * 1.04)/installments;
        else if (installments >= 61 && installments <= 72)
            return (value * 1.05)/installments;
        else
            return (value * 1.06)/installments;
    }
}
