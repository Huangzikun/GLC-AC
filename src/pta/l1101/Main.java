package pta.l1101;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();

        Queue<String> forbiddenWords = new LinkedList<>();
        for (int i = 0; i < N; i++) {
            forbiddenWords.add(scanner.nextLine().trim());
        }

        int k = scanner.nextInt();
        scanner.nextLine();

        String text = scanner.nextLine();

        int count = 0;
        StringBuilder result = new StringBuilder(text);

        while (!forbiddenWords.isEmpty()) {
            String word = forbiddenWords.poll();
            int index = 0;
            while ((index = result.indexOf(word, index)) != -1) {
                count++;
                result.replace(index, index + word.length(), "***");
                index += "***".length();
            }
        }

        if (count < k) {
            String re = result.toString().replace("***", "<censored>");
            System.out.println(re);
        } else {
            System.out.println(count);
            System.out.println("He Xie Ni Quan Jia!");
        }
    }
}