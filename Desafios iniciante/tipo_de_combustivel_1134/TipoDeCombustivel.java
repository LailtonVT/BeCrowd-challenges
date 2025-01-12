import java.util.Scanner;

public class TipoDeCombustivel {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int combustivel;
        int alcool = 0;
        int gasolina = 0;
        int diesel = 0;

        while (true) {
            combustivel = sc.nextInt();

            switch (combustivel) {
                case 1:
                    alcool++;
                    break;
                case 2:
                    gasolina++;
                    break;
                case 3:
                    diesel++;
                    break;
                case 4:
                    break;
                default:
                    continue;
            }
            
            if(combustivel == 4){
                break;
            } 
        } 

        
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: " + alcool);
        System.out.println("Gasolina: " + gasolina);
        System.out.println("Diesel: " + diesel);

        sc.close();
    }
}
