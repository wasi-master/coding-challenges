public class StarPattern {
	public static void main(String[] args) {
		int iterations = 0;
		int i = 0;
		int size = 15;

		while (iterations < size) {
			iterations++;
			if (iterations <= (int) (size / 2)) {
				i++;
				System.out.print(" ".repeat(size - i));
				System.out.println("* ".repeat(i));
			} else {
				i--;
				System.out.print(" ".repeat(size - i));
				System.out.println("* ".repeat(i));
			}
		}
	}
}