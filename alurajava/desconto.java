import java.util.Scanner;
public class desconto {
    public static void main(String[] args) {
        double preco;
        
        Scanner leitorValor = new Scanner(System.in);

        System.out.println("Digite o valor da compra: ");
        preco = leitorValor.nextDouble();

        double desconto = preco * 0.1;
        double descontopreco = preco - desconto; 

        if(preco >= 100.0){
             System.out.println("Desconto de 10% aplicado.\n Novo valor: R$ " + descontopreco);
        } else {
            System.out.println("Nenhum desconto aplicado\n Valor total: R$ " + preco);
        }
        leitorValor.close();
    }
}
