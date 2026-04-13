import java.util.Scanner;
public class intervalonumero {
    public static void main(String[] args) {
        
        Scanner LeitorN = new Scanner(System.in);
        double emprestimo;

        System.out.println("Digite o valor do empréstimo: ");
        emprestimo = LeitorN.nextDouble();

        if(emprestimo >= 1000.0 && emprestimo <= 5000.0){
            System.out.println("O valor " + emprestimo + ", não está dentro do intervalo permitido para empréstimo");
        } else {
            System.out.println("O Emprestimo nao pode ser concedido, pois não está no intervalo permitido.");
        }
        LeitorN.close();
    }
}
