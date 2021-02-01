class Solution {
   public static String solution(String new_id) {
        int answer = 0;
        
        new_id = new_id.toLowerCase();
        // 조건 1 
        new_id = new_id.replaceAll("[^a-z0-9\\-_.]","");
        // 조건 2 
        new_id = new_id.replaceAll("\\.+",".");
        //조건 3
        new_id = new_id.replaceAll("^[.]|[.]$","");
        //조건 4
        new_id = new_id.length() == 0? "a" : new_id.length() >=15 ? new_id.substring(0,15) : new_id;
        //조건 5 , 조건 6
        new_id = new_id.replaceAll("^[.]|[.]$","");
        //조건 6
        StringBuilder sb = new StringBuilder();
        
        for(int i=0;i<3-new_id.length();i++){ //조건 7
            sb.append(new_id.charAt(new_id.length()-1));
        }
       
        return new_id + sb.toString();
       
    }
}
