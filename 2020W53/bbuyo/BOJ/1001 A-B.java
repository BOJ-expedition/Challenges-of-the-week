// https://www.acmicpc.net/problem/1001

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.OptionalDouble;
import java.util.OptionalInt;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] sr = br.readLine().split(" ");
        OptionalInt result = Arrays.stream(sr).mapToInt(i-> Integer.parseInt(i)).reduce((left, right) -> left - right);
        result.ifPresent(System.out::println);
    }
}