//
// Create a calculator which won't allow the user to divide by 0.
//
package me.michal.assignments.lab02;

import java.util.Arrays;
import java.util.InputMismatchException;
import java.util.List;
import java.util.Scanner;

public class Task5 {

    public static void main(String[] args) {
        List<Character> properOperators = Arrays.asList('*', '/', '+', '-');
        Scanner input = new Scanner(System.in);
        float firstNumber;
        float secondNumber;
        char operator;
        while (true) {
            try {
                System.out.println("Enter first number");
                firstNumber = input.nextFloat();
                System.out.println("What do you want to do? ('+', '-', '*', '/')");
                operator = input.next().charAt(0);
                if (!properOperators.contains(operator))
                    throw new InputMismatchException("Wrong operator!");
                System.out.println("Enter second number");
                secondNumber = input.nextFloat();
                if (operator == '/' && secondNumber == 0)
                    throw new InputMismatchException("Can't divide by zero!");
                break;
            }
            catch (InputMismatchException exception) {
                System.out.println("You entered a wrong value!");
                input.next();
            }
        }
        input.close();
        System.out.println(calculate(firstNumber, operator, secondNumber));
    }
    private static double calculate(float number1, char operator, float number2) {
        return switch (operator) {
            case '+' -> number1 + number2;
            case '-' -> number1 - number2;
            case '*' -> number1 * number2;
            case '/' -> number1 / number2;
            default -> 0;
        };
    }
}
