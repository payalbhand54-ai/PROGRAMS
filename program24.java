import java.util.Scanner;


class program24 {

    public static void main(String  A[]) {

        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enetr yor name :");
        sName = scanner.next();  // next()  accept a word _upto sapce 

        System.out.println("Welcome "+sName);
        
    }

}
