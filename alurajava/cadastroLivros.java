public class cadastroLivros {
    public static void main(String[]args){
        String tituloLivro = "O Pequeno Príncipe";
        String autorLivro = "Antoine de Saint-Exupéry";
        int nPaginas = 96;
        double preco = 39.9;
        char categoria = 'F';
        String categoriaDescricao;

        if (categoria ==  'F'){
            categoriaDescricao = "Fição";
        } else if (categoria == 'N') {
            categoriaDescricao = "Não-ficção";
        } else if (categoria == 'T') {
            categoriaDescricao = "Tecnologia";
        } else if (categoria == 'H') {
            categoriaDescricao = "História";
        } else {
            categoriaDescricao = "Categoria inválida";
        }
        System.out.println("Livro cadastrado: \"" + tituloLivro + "\", de " + autorLivro + " Ele possui " + nPaginas + " paginas, custa R$" + preco + " e pertence à categoria " + categoriaDescricao + ".");
    }
}
// Para fazer uma frase completa no println: No espaço que desejar colocar uma varivavel se adicionar um, "+ nomevarivael", depois outro "+" para continuidade, em seguida continuando com a frase desejada em ordem, como acima. 
