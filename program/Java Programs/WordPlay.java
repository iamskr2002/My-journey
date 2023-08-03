public class WordPlay {
    
    public boolean isVowel(char ch) {
        char lowerCh = Character.toLowerCase(ch);
        return lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u';
    }

    public String replaceVowel(String phrase, char ch) {
        StringBuilder result = new StringBuilder();
        for (char c : phrase.toCharArray()) {
            if (isVowel(c)) {
                result.append(ch);
            } else {
                result.append(c);
            }
        }
        return result.toString();
    }

    public String emphasize(String phrase, char ch) {
        StringBuilder result = new StringBuilder();
        for(int i=0; i< phrase.length(); i++){
            char c = phrase.charAt(i);
            char lowerCh = Character.toLowerCase(ch);
            char lowerC = Character.toLowerCase(c);
            if (lowerC == lowerCh) {
                if (i % 2 == 0) {
                    result.append('*');
                }
                else{
                result.append('+');
                }
            }
            else {
                result.append(c);
            }
        }
        return result.toString();
    }  

    public static void main(String[] args) {
        WordPlay wordPlay = new WordPlay();
        
        // Testing isVowel method
        System.out.println(wordPlay.isVowel('F'));
        System.out.println(wordPlay.isVowel('a'));

        // testing replaceVowel method
        System.out.println(wordPlay.replaceVowel("Hello World", '*'));

        // Testing emphasize method
        System.out.println(wordPlay.emphasize("dna ctgaaactga", 'a'));
        System.out.println(wordPlay.emphasize("Mary Bella Abracadabra", 'a'));
    }
}