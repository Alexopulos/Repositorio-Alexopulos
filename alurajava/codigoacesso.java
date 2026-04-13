
import java.util.Scanner;    
 
public class codigoacesso {    
    public static void main(String[] args) {    
        Scanner scanner = new Scanner(System.in);    
        int codigoCorreto = 2023;    
        int nivelPermissaoMinimo = 1;    
        int nivelPermissaoMaximo = 3;    
 
        System.out.print("Digite o código de acesso: ");    
        int codigoDigitado = scanner.nextInt();    
 
        System.out.print("Digite o nível de permissão: ");    
        int nivelPermissao = scanner.nextInt();    
 
        boolean codigoValido = codigoDigitado == codigoCorreto;  
        boolean permissaoValida = nivelPermissao >= nivelPermissaoMinimo && nivelPermissao <= nivelPermissaoMaximo;    
 
        if (codigoValido && permissaoValida) {    
            System.out.println("Acesso permitido. Bem-vindo ao sistema!");    
        } else {    
            System.out.println("Acesso negado. Motivo(s):");    
            if (!codigoValido) {    
                System.out.println("- Código de acesso incorreto.");    
            }    
            if (!permissaoValida) {    
                System.out.println("- Nível de permissão inválido.");    
            }    
            scanner.close();
        }    
    }    
}    
//Meu código Incorreto
/*import java.util.Scanner;
public class codigoacesso {
    public static void main(String[] args) {
        
        Scanner leitorN = new Scanner(System.in);

        System.out.println("Digite o código de acesso: ");
        int codigo = leitorN.nextInt();

        System.out.println("Digite o código de acesso: ");
        int nivel = leitorN.nextInt();

        boolean codigoValido = codigo == 2023;
        boolean nivelValido = nivel == 1 || nivel == 2 || nivel == 3; //tem que ser ||, pois é 1 OU 2 OU 3
    
        if(codigoValido && nivelValido){
            System.out.println("Acesso permitido. Bem-vindo ao sistema!");
        } else{
            System.out.println("Acesso negado");
        }
        leitorN.close();
    }
}
*/ 
        