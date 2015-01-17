public class Bits {
	public static void main(String[] args) {
		System.out.println(
			((int) (Math.log(Integer.parseInt(args[0])) / Math.log(2))) + 1
		);
	}
}
