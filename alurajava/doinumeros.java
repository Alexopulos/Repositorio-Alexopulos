import java.util.Scanner;
public class doinumeros {
    public static void main(String[] args) {
        int n1;
        int n2;

        Scanner leitorN = new Scanner(System.in); //Declarar o Scanner antes de utilizar em qualquer lugar
        
        System.out.println("Digite o primeiro numero: ");
        n1 = leitorN.nextInt();                             //O segredo da lógica para ficar bonito é Perguntar --> Ler --> Perguntar --> Ler
        System.out.println("Digite o segundo numero: ");
        n2 = leitorN.nextInt();
        
        if (n1 > n2) {
            System.out.println("O primeiro numero é maior");
        } else if(n2 > n1){
            System.out.println("O segundo numero é maior");
        } else {
            System.out.println("Ambos os numeros são iguais");
        }
        leitorN.close();
    }
}
