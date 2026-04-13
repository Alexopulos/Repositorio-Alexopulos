public class ecommerce {
    public static void main(String[] args) {
        double preco = 150;
        String precoDescricao;
        if(preco <= 50){
            System.out.println("Categoria do produto: Economico.");
        } else if(preco >= 50.01 && preco <= 200){
            System.out.println("Categoria do produto: Intermediario");
        } else if(preco > 200){
            System.out.println("Categoria do produto: Premium");
        }
    }
}
/* No meu codigo o precoDescricao nao tem valor e basicamente é lixo
    Nesse aqui feito pelo gemini, a variavel é utilizada
public class ecommerce {
    public static void main(String[] args) {
        double preco = 150;
        String categoria; // Vamos usar a variável que você criou

        if (preco <= 50) {
            categoria = "Economico";
        } else if (preco <= 200) { 
            // Se chegou aqui, o Java já sabe que é maior que 50
            categoria = "Intermediario";
        } else {
            // Se não é nenhum dos acima, só pode ser Premium
            categoria = "Premium";
        }

        System.out.println("Categoria do produto: " + categoria);
    }
} */