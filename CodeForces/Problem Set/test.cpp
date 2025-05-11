class Solution {
public:
    int romanToInt(string s) {
      map<Character, Integer> m1 = new HashMap<>();
      map.put('I', 1);  
      map.put('V', 5);  
      map.put('X', 10);  
      map.put('L', 50);  
      map.put('C', 100);  
      map.put('D', 500);  
      map.put('M', 1000);  

      int result = map.get(s.chatAt(s.length()-1));
      for(int i = s.length()-2; i >= 0; i--) {
        if(map.get(s.charAt(i)) < map.get(s.charAt(i+1))) {
            result -= map.get(s.charAt(i));
        }else {
            result += map.get(s.charAt(i));
        }
      }
    }
};
