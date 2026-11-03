import java.util.Scanner;


class program23 {

    public static void main(String  A[]) {

        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enetr yor name :");
        sName = scanner.nextLine();   // nextLine() accept line 

        System.out.println("Welcome "+sName);
        
    }

}
