import java.util.Scanner; 
public class triangulo {
    public static void main(){
        int lado1;
        int lado2;
        int lado3;

        Scanner leitorLado = new Scanner(System.in);

        System.out.println("Digite o primeiro lado: ");
        lado1 = leitorLado.nextInt();
        System.out.println("Digite o segundo lado: ");
        lado2 = leitorLado.nextInt();
        System.out.println("Digite o terceiro lado: ");
        lado3 = leitorLado.nextInt();

        leitorLado.close();

        if(lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado2 + lado1 > lado3 || lado2 + lado3 > lado1 || lado3 + lado1 > lado2 || lado3 + lado2 >lado1){
            System.out.println("É possível formar um triâgulo");
        }   else{
            System.out.println("Não é possível formar um trinângulo");
        }
    }
}
