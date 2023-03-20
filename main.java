import java.util.*;

public class main {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int age = sc.nextInt();
      if(age % 2 == 0){
        System.out.println("Even");
      }
      else {
        System.out.println("Odd");
      }
    }
}