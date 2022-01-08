//
// Enter some numbers and calculate the min, max and average value and the amount of entered numbers.
//
package me.michal.assignments.chapter02;

import org.jetbrains.annotations.Contract;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Task4 {

    public static void main(String[] args) {
        List<Integer> listNumbers = new ArrayList<>();
        Scanner input = new Scanner(System.in);

        for (int i = 0; i < 6; i++) {
            System.out.println("Enter digit");
            listNumbers.add(input.nextInt());
        }
        System.out.println("Max " + Collections.max(listNumbers) + " Min " + Collections.min(listNumbers));
        double average = getAverage(listNumbers);
        System.out.println("Average equals " + average);
        System.out.println("Number of entered digits is " + listNumbers.size());
    }

    @Contract(pure = true)
    private static double getAverage(List<Integer> array) {
        double sum = 0.0;
        int amount = array.size();
        for (Integer integer : array) {
            sum += integer;
        }
        return sum/amount;
    }
}
