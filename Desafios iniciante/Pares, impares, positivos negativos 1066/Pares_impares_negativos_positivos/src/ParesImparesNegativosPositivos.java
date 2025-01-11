import java.util.Scanner;

public class ParesImparesNegativosPositivos {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int contadorPares = 0;
        int contadorImpares = 0;
        int contadorNegativo = 0;
        int contadorPositivo = 0;

        int[] valores = new int[5];

        for(int i = 0; i < 5; i++){
            valores[i] = sc.nextInt();
        }
        for(int i = 0; i < 5; i++){
            if(valores[i] % 2 == 0){
                contadorPares++;
            }
            if(valores[i] % 2 != 0){
                contadorImpares++;
            }
            if(valores[i] > 0){
                contadorPositivo++;
            }
            if(valores[i] < 0){
                contadorNegativo++;
            }
        }
        System.out.println(contadorPares + " valor(es) par(es)");
        System.out.println(contadorImpares + " valor(es) impa(es)");
        System.out.println(contadorPositivo + " valor(es) positivo(s)");
        System.out.println(contadorNegativo + " valor(es) negativo(s)");
        sc.close();
    }
}
