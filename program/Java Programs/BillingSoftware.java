import java.io.FileWriter;
import java.io.IOException;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

public class BillingSoftware {
    private static ArrayList<Item> items = new ArrayList<>();
    private static Customer customer = new Customer();
    private static final DateFormat dateFormat = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss");

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get customer information
        System.out.println("Enter customer name:");
        customer.setName(scanner.nextLine());

        System.out.println("Enter customer address:");
        customer.setAddress(scanner.nextLine());

        System.out.println("Enter customer phone number:");
        customer.setPhoneNumber(scanner.nextLine());

        // Add items to bill
        boolean addMoreItems = true;
        while (addMoreItems) {
            Item item = new Item();
            System.out.println("Enter item name:");
            item.setName(scanner.nextLine());

            System.out.println("Enter item price:");
            item.setPrice(Double.parseDouble(scanner.nextLine()));

            System.out.println("Enter item quantity:");
            item.setQuantity(Integer.parseInt(scanner.nextLine()));

            items.add(item);

            System.out.println("Add another item? (y/n)");
            addMoreItems = scanner.nextLine().equalsIgnoreCase("y");
        }

        // Calculate total amount
        double totalAmount = 0.0;
        for (Item item : items) {
            totalAmount += item.getPrice() * item.getQuantity();
        }

        // Print bill
        printBill(customer, items, totalAmount);

        // Save bill to file
        saveBillToFile(customer, items, totalAmount);

        // Generate report
        generateReport();
    }

    private static void printBill(Customer customer, ArrayList<Item> items, double totalAmount) {
        System.out.println("---------------");
        System.out.println("Customer: " + customer.getName());
        System.out.println("Address: " + customer.getAddress());
        System.out.println("Phone number: " + customer.getPhoneNumber());
        System.out.println("Date: " + dateFormat.format(new Date()));
        System.out.println("---------------");

        System.out.printf("%-20s %-10s %-10s %-10s\n", "Item", "Price", "Quantity", "Total");
        System.out.println("---------------------------------------------");

        for (Item item : items) {
            System.out.printf("%-20s %-10.2f %-10d %-10.2f\n", item.getName(), item.getPrice(), item.getQuantity(), item.getPrice() * item.getQuantity());
        }

        System.out.println("---------------------------------------------");
        System.out.printf("%-40s %-10.2f\n", "Total amount:", totalAmount);
        System.out.println("---------------");
    }

    private static void saveBillToFile(Customer customer, ArrayList<Item> items, double totalAmount) {
        try {
            FileWriter writer = new FileWriter("bill.txt");
            writer.write("Customer: " + customer.getName() + "\n");
            writer.write("Address: " + customer.getAddress() + "\n");
            writer.write("Phone number: " + customer.getPhoneNumber() + "\n");
            writer.write("Date: " + dateFormat.format(new Date()) + "\n");
            writer.write("---------------------------------------------------\n");
            writer.write(String.format("%-20s %-10s %-10s %-10s\n", "Item", "Price", "Quantity", "Total"));
            writer.write("---------------------------------------------------\n");

            for (Item item : items) {
                writer.write(String.format("%-20s %-10.2f %-10d %-10.2f\n", item.getName(), item.getPrice(), item.getQuantity(), item.getPrice() * item.getQuantity()));
            }

            writer.write("---------------------------------------------------\n");
            writer.write(String.format("%-40s %-10.2f\n", "Total amount:", totalAmount));
            writer.write("---------------------------------------------------\n");
    
            writer.close();
            System.out.println("Bill saved to file.");
        } catch (IOException e) {
            System.out.println("An error occurred while saving the bill to file.");
            e.printStackTrace();
        }
    }
    
    private static void generateReport() {
        // Connect to database
        // ...
    
        // Execute query to get total sales for today
        // ...
    
        // Generate report and save to file
        // ...
    }

}

class Customer {
private String name;
private String address;
private String phoneNumber;

public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}

public String getAddress() {
    return address;
}

public void setAddress(String address) {
    this.address = address;
}

public String getPhoneNumber() {
    return phoneNumber;
}

public void setPhoneNumber(String phoneNumber) {
    this.phoneNumber = phoneNumber;
}

}

class Item {
private String name;
private double price;
private int quantity;

public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}

public double getPrice() {
    return price;
}

public void setPrice(double price) {
    this.price = price;
}

public int getQuantity() {
    return quantity;
}

public void setQuantity(int quantity) {
    this.quantity = quantity;
}

}
