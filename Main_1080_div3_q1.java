import java.util.Scanner;

public class Main_1080_div3_q1 {
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i = 0; i < t; i++){
            int n = sc.nextInt();
            boolean is67 = false;
            for(int j = 0; j < n; j++){
                int x = sc.nextInt();
                if(x == 67)
                    is67 = true;
            }
            if(is67)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }
}
