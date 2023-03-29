import java.util.*;

public class Recursion {
    public static void printReverse(String str, int idx){
        if (idx==0){
            return;
        }
        System.out.print(str.charAt(idx));
        printReverse(str, idx-1);
    }

    public static void main(String args[]) {
        String str;
        printReverse("abcd", 3);
    }
}