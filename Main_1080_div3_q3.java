import java.util.Scanner;

public class Main_1080_div3_q3 {            // state dp pattern
    static int minOpsToDiceSeq(int[] arr){
        int n = arr.length;
        int[][] dp = new int[n + 1][7];
        for(int i = 1; i < 7; i++)
            dp[1][i] = (arr[0] == i) ? 0 : 1;
        for(int i = 2; i <= n; i++){
            for(int k = 1; k <= 6; k++){
                int minNeighbour = Integer.MAX_VALUE;
                for(int j = 1; j <= 6; j++){
                    if(k != j && k != (7 - j)){
                        minNeighbour = Math.min(minNeighbour, dp[i - 1][j]);
                    }
                }
                dp[i][k] = minNeighbour + ((arr[i - 1] == k) ? 0 : 1);
            }
            
        }
        int ans = Integer.MAX_VALUE;
        for(int i = 1; i < 7; i++)
            ans = Math.min(ans, dp[n][i]);
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i++){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int j = 0; j < n; j++){
                arr[j] = sc.nextInt();
            }
            System.out.println(minOpsToDiceSeq(arr));
        }
        sc.close();
    }
    
}