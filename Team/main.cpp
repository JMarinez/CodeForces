import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = 3;
        int[][] friends = new int[n][m];
        int sol = 0;

        for (int i = 0; i < n; i++){
            int x = 0;
            for (int j = 0; j < m; j++) {
                friends[i][j] = in.nextInt();
                if (friends[i][j] == 1){
                    x++;
                }
            }
            if (x > 1){
                sol++;
            }
        }
        System.out.println(sol);
    }
}
