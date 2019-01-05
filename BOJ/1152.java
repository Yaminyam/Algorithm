import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String E = sc.nextLine();
		int count = 1;
		for (int i = 0; i < E.length() - 2; i++) {
			if ((E.charAt(i) >= 'A' || E.charAt(i) <= 'z') && E.charAt(i + 1) == ' '
					&& (E.charAt(i + 2) >= 'A' || E.charAt(i + 2) <= 'z')) {
				count++;
			}
		}
		if (E.charAt(0) == ' ' && E.length() == 1)count = 0;
			System.out.println(count);
	}
}
