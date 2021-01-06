import java.util.Scanner;

public class Main {
    static boolean[] broken = new boolean[10];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); //채널
        int m = sc.nextInt(); //고장난 버튼 갯수

        //n =5457;
        //m = 3
        for (int i=0; i<m; i++){
            broken[sc.nextInt()] = true;
        }
        //broken[6][7][8] =true

        int ans = Math.abs(n-100);
        //ans = 5457-100 = 5357(+ 나 - 버튼만을 이용하여 원하는 채널로 이동할때의 카운트)

        for (int i=0; i<=1000000; i++){
            int c=i;
            int length = canMove(c);
            //숫자 길이 반환, 5455일때 length=4;
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
        //0일때 숫자0이 망가져있다면 0반환 , 안망가졌다면 1반환
        while (c > 0){
            //채널숫자검사 : 숫자중 한 글자라도 망가져있다면 0반환
            if (broken[c % 10]){
                return 0;
            }
            length += 1;
            c /= 10;
        }
        return length;
    }
}