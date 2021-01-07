import java.util.Scanner;

public class Main {
    static boolean[] broken = new boolean[10];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); //ä��
        int m = sc.nextInt(); //���峭 ��ư ����

        //n =5457;
        //m = 3
        for (int i=0; i<m; i++){
            broken[sc.nextInt()] = true;
        }
        //broken[6][7][8] =true

        int ans = Math.abs(n-100);
        //ans = 5457-100 = 5357(+ �� - ��ư���� �̿��Ͽ� ���ϴ� ä�η� �̵��Ҷ��� ī��Ʈ)

        for (int i=0; i<=1000000; i++){
            int c=i;
            int length = canMove(c);
            //���� ���� ��ȯ, 5455�϶� length=4;
            if (length > 0){
                int press = Math.abs(c-n);
                //press = 5453-5457 = 4 .. 5454-5457=3 ..  5455-5457=2
                if (ans > length + press) {
                    //7>2+4
                    ans = length + press;
                    // ans = 6
                }
            }
        }
        System.out.println(ans);
    }

    private static int canMove(int c) {
        int length = 0;

        if(c == 0)
            return broken[0] ? 0 : 1;
        //0�϶� ����0�� �������ִٸ� 0��ȯ , �ȸ������ٸ� 1��ȯ
        while (c > 0){
            //ä�μ��ڰ˻� : ������ �� ���ڶ� �������ִٸ� 0��ȯ
            if (broken[c % 10]){
                return 0;
            }
            length += 1;
            c /= 10;
        }
        return length;
    }
}