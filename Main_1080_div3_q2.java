import java.util.Scanner;

public class Main_1080_div3_q2 {
    static int getRoot(int x){
        while(x % 2 == 0){
            x /= 2;
        }
        return x;
    }
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i = 0; i < t; i++){
            int n = sc.nextInt();
            int[] arr = new int[n + 1];
            for(int j = 1; j <= n; j++){
                arr[j] = sc.nextInt();
            }
            // Arrays.sort(arr);
            boolean flag = true;
            for(int j = 1; j <= n; j++){
                if(getRoot(j) != getRoot(arr[j])){
                    flag = false;
                    break;
                }
            }
            System.out.println((flag) ? "YES" : "NO");
        }
        sc.close();
    }
}
