public class viagem {
    public static void main(String[] args) {

        double consumoMedio = 12.5; // O carro faz 12,5 km por litro
        double capacidadeTanque = 50; // O tanque tem capacidade para 50 litros
        double combustivelAtual = 20; // Há 20 litros disponíveis
        double distanciaViagem = 200; // A viagem planejada tem 200 km  

        double autonomiMax = capacidadeTanque * consumoMedio;
        double autonomiaAtual = combustivelAtual * consumoMedio;

        System.out.println("Autonomia maxima do veiculo: " + autonomiMax + " km");
        System.out.println("Autonomia atual: " + autonomiaAtual + " km");
        
        if(autonomiaAtual >= distanciaViagem){
            System.out.println("Você conseguirá completar a viagem sem abastecer");
        } else{
            System.out.println( "Nao sera possivel");
        }
    }
}
