class Main {
   // 위장 ...! 옷이름 , 옷종류 해쉬에 넣자 ..! // 24
    public int solution(String[][] clothes) {
        int answer = 1;
        HashMap <String,Integer> map = new HashMap<>();//여기에 담을것 !

        for(int i=0;i<clothes.length;i++){
            if(map.containsKey(clothes[i][1]))
            {
                int count = (int)map.get(clothes[i][1]);
                map.put(clothes[i][1],count+1);
            }else {
                map.put(clothes[i][1],1);
            }
        }
        ArrayList<Integer>arr = new ArrayList();

        for (String key : map.keySet()){
            arr.add(map.get(key)+1);
        }
        for(int i=0;i< arr.size();i++){
            answer*=arr.get(i);
        }
        return answer-1;

    }

    public static void main(String[] args){

    }
}
