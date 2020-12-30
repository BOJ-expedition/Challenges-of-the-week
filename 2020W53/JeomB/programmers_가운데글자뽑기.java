class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        
        char [] a;
        if(s.length()%2!=0){
            a = new char[1];
            a[0] = s.charAt(s.length()/2);
        }else {
            a = new char[2];
            a[0]= s.charAt(s.length()/2-1);
            a[1]= s.charAt(s.length()/2);

        }
        String str2 = new String(a);
        
        sc.close();
    }
}
