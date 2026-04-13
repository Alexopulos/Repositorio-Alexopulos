import java.util.Scanner;
public class diasemana {
    public static void main(String[] args) {
        String diaSemana;

        Scanner leitorDia = new Scanner(System.in);

        System.out.println("Digite o dia da semana(em letras minúsculas): ");
        diaSemana = leitorDia.nextLine();

        if(diaSemana.equals("domingo")){            //== nao pode ser usado para comparar pq é string
            System.out.println("Domingo não é dia útil");  //Nesse caso utilizamos equals
        } else if(diaSemana.equals("segunda")){
            System.out.println("Segunda é dia útil");
        } else if(diaSemana.equals("terca")){
            System.out.println("Terca é dia útil");
        } else if(diaSemana.equals("quarta")){
            System.out.println("Quarta é dia útil");   
        } else if(diaSemana.equals("quinta")){
            System.out.println("Quinta é dia útil");
        } else if(diaSemana.equals("leitorDia")){
            System.out.println("Sexta é dia útil");
        } else if(diaSemana.equals("sabado")){
            System.out.println("Sabado é dia útil");
        } 
        leitorDia.close();
    }
} 

// Para poupar trabalho poderia ter feito da seguinte maneira:
// Utilizando || para simbolizar "ou" e fazer uma condicional só 
/*
import java.util.Scanner;     

public class VerificacaoDiaUtil {     
    public static void main(String[] args) {      
        Scanner scanner = new Scanner(System.in);   

        System.out.print("Digite o dia da semana (em letras minúsculas): ");      
        String dia = scanner.nextLine(); 
        
        scanner.close();      

        if (dia.equals("segunda") || dia.equals("terca") ||      
            dia.equals("quarta") || dia.equals("quinta") ||      
            dia.equals("sexta")) {      
            System.out.println(dia + " é um dia útil.");      
        } else {      
            System.out.println(dia + " não é um dia útil.");      
        }      
    }      
}    */