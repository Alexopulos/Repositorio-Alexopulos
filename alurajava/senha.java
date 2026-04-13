 import java.util.Scanner;  

public class senha {  
    public static void main(String[] args) {  
        String senhaCorreta = "123456";    
        Scanner scanner = new Scanner(System.in);  

        System.out.print("Digite a senha: ");  
        String tentativaSenha = scanner.nextLine();  

        scanner.close();  

        if (tentativaSenha.equals(senhaCorreta)) {  
            System.out.println("Acesso permitido!");  
        } else {  
            System.out.println("Acesso negado!");  
        }  
    }  
}
/*import java.util.Scanner;

public class senha {
    public static void main(String[] args) {
       int senha = 123456;

       Scanner leitorSenha = new Scanner(System.in);
       System.out.println("Digite sua senha: ");
       senha = leitorSenha.nextInt();

       if(senha == 123456){
        System.out.println("Acesso permitido!");
       } else{
        System.out.println("Acesso negado!");
       }
    }
}
*/