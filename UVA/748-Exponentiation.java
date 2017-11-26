import java.math.BigDecimal;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner scanner;
		BigDecimal num;

		scanner = new Scanner(System.in);
		while(scanner.hasNext()) {
			num = new BigDecimal(scanner.next());
			num = num.pow(scanner.nextByte());
			System.out.println(sinCerosInsignificantes(num.toPlainString()));
		}

	}

	private static String sinCerosInsignificantes(String numero) {
		int i, j;
		for(i = 0; i < numero.length(); i++) {
			if(numero.charAt(i) != '0') break;
		}

		for(j = numero.length() - 1; j >= 0; j--) {
			if(numero.charAt(j) != '0') break;
		}
		return numero.substring(i, j + 1);
	}	
}