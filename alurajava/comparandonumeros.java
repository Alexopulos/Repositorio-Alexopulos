import java.util.Scanner;
public class comparandonumeros {
    public static void main(String[] args) {
        int n1;
        int n2;
        
        System.out.println("Digite o primeiro numero:");
        System.out.println("Digite o segundo numero:");

        Scanner leitorN = new Scanner(System.in);
        n1 = leitorN.nextInt();
        n2 = leitorN.nextInt();

        if(n1.equals(n2)){
            System.out.println("O maior número é: ");
        } else {

        }
    }
}
