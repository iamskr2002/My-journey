import java.util.*;

public class Recursion{

    public static void printSubset(ArrayList<Integer> subset){
        for(int i=0; i<subset.size(); i++){
            System.out.print(subset.get(i)+ " ");
        }
        System.out.println();
    }

    public static void findsubset(int m, ArrayList<Integer> subset, int j){
        if(j==0){
            printSubset(subset);
            return ;
        }

        //add hoga
        subset.add(m);
        findsubset(m+1, subset, j-1);

        //add nahi hoga
        subset.remove(subset.size()-1);
        findsubset(m+1, subset, j-1);
    }


    public static void main(String args[]){
        int j = 2;
        ArrayList<Integer> subset = new ArrayList<>();
       findsubset(1, subset, j);
    }
}