import java.util.Scanner;

public class parimparcondicionais {
    public static void main(String[] args) {
        int numero; 
        
        Scanner leitor = new Scanner(System.in);    //Definindo o scanner leitor
        System.out.println("Informe o nuemro:"); //Solicitando a informação
        numero = leitor.nextInt();                  //Fazendo a informação ficar legivel

        if(numero % 2 == 0){
            System.out.println("O numero " + numero + " é par");
        } else if (numero % 2 != 0) {
             System.out.println("O numero " + numero + " é ímpar");
        }
        leitor.close();  //Fechando o scanner após ja ter conseguido ler o dado
    }
}
