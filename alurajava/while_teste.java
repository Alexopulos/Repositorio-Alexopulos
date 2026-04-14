import java.util.Scanner;

public class while_teste {

    public static void main(String[] args) {
        String[] vendedores = {"Carlos", "Mariana", "João", "Fernanda"};
        double[] vendas = {4000.00, 8000.00, 12000.00, 5000.00};

    System.out.println("\n Testando com while");
int j = 0;
boolean imprimeOutro = true;

Scanner leitura = new Scanner(System.in);

while (imprimeOutro) {
    System.out.printf("%s - comissão %.2f\n", vendedores[j], calcularComissao(vendas[j]));
    j++;
    System.out.println("Deseja imprimir outro?");
    imprimeOutro = leitura.nextBoolean();
} leitura.close();
    }

    public static double calcularComissao(double totalVendas) {
        if (totalVendas <= 5000) {
            return totalVendas * 0.03;
        } else if (totalVendas <= 10000) {
            return totalVendas * 0.05;
        } else {
            return totalVendas * 0.07;
        }
    }
    
}
