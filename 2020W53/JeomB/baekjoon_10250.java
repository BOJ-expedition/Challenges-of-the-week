// https://www.acmicpc.net/source/24755181

import java.util.Scanner;
class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(); //테스트 케이스 입력받기.
        int [] arr = new int[num];

        for(int i=0;i<num;i++){
            int h_num = sc.nextInt();// 호텔 층수
            int w_num = sc.nextInt(); //호텔 방수
            int n_num = sc.nextInt(); // 몇번째 손님?
            int number = n_num%h_num; //층수 구하기
            if(number==0){
                number=h_num;
            }
            number*=100;
            int n1 = n_num/h_num;
            if(n_num%h_num!=0){
                n1+=1;
            }
            int n2 = number+n1;
            arr[i]=n2;
        }
        for (int i=0;i<num;i++){
            System.out.println(arr[i]);
        }
            //    bf.close();
        sc.close();
    }
}
