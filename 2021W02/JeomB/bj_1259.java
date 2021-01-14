import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);


        ArrayList list = new ArrayList();

        while (true){
        //    System.out.println("입력");
            String str = sc.nextLine();
            String str2 = "";
            String str1 = "";
            if(str.equals("0")){
                break;
            }
            if(str.length()==1){
                list.add("yes");
                continue;
            }
            if(str.length()>3){
                if ((str.length()+1)% 2 == 0) {
                    str1= str.substring(0,(str.length()+1)/2);
                    str2 = str.substring((str.length()-1)/2, str.length());
                } else {
                    str1= str.substring(0,(str.length()+1)/2);
                    str2 = str.substring((str.length()+1)/2, str.length());
                }
            }else{
                if((str.length()+1)%2==0){
                    str1= String.valueOf(str.charAt(0));
                    str2=String.valueOf(str.charAt(2));
                }else {
                    str1= str.substring(0,(str.length()+1)/2);
                    str2=str.substring((str.length()+1)/2,str.length());
                }
            }
        //    System.out.println(str1);
        //    System.out.println(str2);
            if(str1.equals(new StringBuffer(str2).reverse().toString())){
                list.add("yes");
            }else {
                list.add("no");
            }
        }
        for(int i=0;i<list.size();i++){
            System.out.print(list.get(i));
            if(i< list.size()-1){
                System.out.println();
            }
        }

    }
}
