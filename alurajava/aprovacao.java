import java.util.Scanner;
public class aprovacao {
    public static void main(String[] args) {
        double nota1;
        double nota2;
        
        Scanner leitorNota = new Scanner(System.in);
        System.out.print("Digite suas notas: ");
        nota1 = leitorNota.nextDouble();
        nota2 = leitorNota.nextDouble();

        double media = (nota1 + nota2) / 2; //Essa media deve ser posicionada aqui
                                            //Pois ela deve ser iniciada depois das variaveis receberem seu valor.
        if(media >= 7.0){
        System.out.println("O estudante teve média " + media + " e foi aprovado");
        } else if(media >= 5.0 && media <= 6.9){
         System.out.println("O estudante teve média " + media + " e esta de recuperação");   
        } else{
            System.out.println("O estudante teve média " + media + " e foi reprovado");
        }
        leitorNota.close();
    }
}
/*
 Deixando o visual mais profissional com uma "moldura"
        System.out.println("--- SISTEMA DE NOTAS ESCOLARES ---");
        
        System.out.print("Informe a 1ª nota: ");
        nota1 = leitorNota.nextDouble();

        System.out.print("Informe a 2ª nota: ");
        nota2 = leitorNota.nextDouble();

        // Linha visual para separar entrada de dados do resultado
        System.out.println("----------------------------------"); */