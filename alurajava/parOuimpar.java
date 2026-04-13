public class parOuimpar {
    public static void main(String[] args) {
        int numero =  7;
        if(numero % 2 != 0){
            System.out.println("O numero é ímpar");
        } else if(numero % 2 == 0){
            System.out.println( "O numero é par");
        }
    }
}
//Poderia ter feito mais simples ainda:
/*
if (numero % 2 == 0) {
            System.out.println("O número é par.");
        } else {
            System.out.println("O número é ímpar.");
*/