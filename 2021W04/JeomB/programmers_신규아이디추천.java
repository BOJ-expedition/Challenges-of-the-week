class Solution {
    public String solution(String new_id) {
   String answer = "";

new_id = new_id.toLowerCase();
        new_id = new_id.replaceAll("[^a-z0-9\\-_.]","");
        new_id = new_id.replaceAll("\\.+",".");
        new_id = new_id.replaceAll("^[.]|[.]$","");
        new_id = new_id.length() == 0? "a" : new_id.length() >=15 ? new_id.substring(0,15) : new_id;
        new_id = new_id.replaceAll("^[.]|[.]$","");
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<3-new_id.length();i++){
            sb.append(new_id.charAt(new_id.length()-1));
        }
        return new_id + sb.toString();
    
    }
}
