import java.util.Scanner;
public class degraus {
    public static void main(String[] args) {
      int degraus;
      Scanner leitorDegraus = new Scanner(System.in);

      System.out.println("Digite o numero de degraus: ");
      degraus = leitorDegraus.nextInt();                 

      
      for(int i = 1; i < degraus; i++) {                 //Começa em 1 por causa que não é um array, ai a posição 1 é 1 mesmo
        System.out.println("Subindo o degrau " + i);     //Mostra que ta subindo degraus e quais são eles "i"
      } 
      System.out.println("Você chegou ao topo");       //Mensagem que mostra que acabou ao topo
      leitorDegraus.close();
    }
}
