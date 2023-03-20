import java.util.*;

class main {
    public static void main(String args[]) {
      System.out.println("-------------------------------------------------");
      System.out.println("           Choose Your Command");
      System.out.println(" 1. Addition \n 2. Subtraction \n 3. Multiply \n 4. Duvision");
      System.out.println("-------------------------------------------------");
      System.out.print("           Enter Your Command: ");
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      System.out.println("\n");
      if(a==1){
        System.out.print("Enter the Fisrt Number: ");
        int b = sc.nextInt();
        System.out.print("Enter the Second Number: ");
        int c = sc.nextInt();
        int sum = b+c;
        System.out.println("The Sum is: "+ sum);
      }

      else if(a==2){
        System.out.print("Enter the greatest Number: ");
        int b = sc.nextInt();
        System.out.print("Enter the smallest Number: ");
        int c = sc.nextInt();
        int minus = b-c;
        System.out.println("The Subtraction is: "+ minus);
      }

      else if(a==3){
        System.out.print("Enter the Fisrt Number: ");
        int b = sc.nextInt();
        System.out.print("Enter the Second Number: ");
        int c = sc.nextInt();
        int multiply = b*c;
        System.out.println("The Multiply is: "+ multiply); 
      }

      else if(a==4){
        System.out.print("Enter the greatest Number: ");
        int b = sc.nextInt();
        System.out.print("Enter the smallest Number: ");
        int c = sc.nextInt();
        int divide = b/c;
        System.out.println("The divide is: "+ divide);
      }

      else {
        System.out.println("Sorry, Syntax Error !!! ");
      }
    }
}