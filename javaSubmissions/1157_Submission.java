import java.io.IOException;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int x, count;
		try (Scanner scan = new Scanner(System.in)) {
			x = scan.nextInt();
		}
		count = 0;
		while(count != x) {
			count ++;	
			if( x % count == 0) {
				System.out.println(count);
			}
			
		}
	}
	
}

