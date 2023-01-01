class Solution {
    public boolean wordPattern(String pattern, String s) {
        // split s into a list of words
        String[] words = s.split(" ");

        // check if s follows the pattern
        if (pattern.length() != words.length) {
            return false;
        }
        Map<Character, String> charToWord = new HashMap<>();
        Map<String, Character> wordToChar = new HashMap<>();
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String w = words[i];
            if (charToWord.containsKey(c) && !charToWord.get(c).equals(w)) {
                return false;
            }
            if (wordToChar.containsKey(w) && !wordToChar.get(w).equals(c)) {
                return false;
            }
            charToWord.put(c, w);
            wordToChar.put(w, c);
        }
        return true;
    }
}
