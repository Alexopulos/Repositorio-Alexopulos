/*
Cogido que precisa ser corrigido
public class Main {
    public static void main(String[] args) {
        if (idade >= 18) {
            int idade = 17;
            String mensagem = "Você é maior de idade.";
        } else {
            String mensagem = "Você é menor de idade.";
        }
 
        System.out.println(mensagem);
    }
} */
//Meu codigo
public class verificacaoIdade {
    public static void main(String[] args) {
        int idade = 17;
        if (idade >= 18) {
            System.out.println("Você é maior de idade.");
        } else {
            System.out.println("Você é menor de idade.");
        }
    }
}
/*Codigo corrigido - Declarou mensagem e tirou o idade de dentro do if
public class Main {
    public static void main(String[] args) {
        int idade = 17; // Declara a variável antes da verificação
        String mensagem; // Declara a variável antes do bloco condicional
 
        if (idade >= 18) {
            mensagem = "Você é maior de idade.";
        } else {
            mensagem = "Você é menor de idade.";
        }
 
        System.out.println(mensagem); // Agora a variável está acessível
    }
} */
