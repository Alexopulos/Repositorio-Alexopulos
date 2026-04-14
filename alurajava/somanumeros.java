public class somanumeros {
    public static void main(String[] args) {
        int[] valores = {10, 20, 30, 40, 50};           //Array com os numeros solicitados
        int soma = 0;                                   //Variavel para armazenar o valor da soma, tem que ser 0, 

        for(int valor : valores){               //":" significa "para cada variavel(valor nesse caso) em valores(outra variavel)"    
            soma += valor;                      //valor -> recebe cada elemento; : -> "em" ou "dentro de", valores -> array percorrido
        }
        System.out.println("A soma total das receitas é: " + soma); //Soma pois queremos o valor armazenado na varivel da soma de tudo
         // Se colocasse valores, iria printar 10, 20, 30, 40 e 50.
    }
}
