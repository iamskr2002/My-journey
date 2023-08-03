public class CaesarCipher {

    public String encrypt(String input, int key) {
        StringBuilder encrypted = new StringBuilder(input);
        String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String smallalpha = "abcdefghijklmnopqrstuvwxyz";
        String shiftedalphabet = alphabet.substring(key) + alphabet.substring(0, key);
        String sftdalpha = smallalpha.substring(key) + smallalpha.substring(0, key);

        for (int i = 0; i < encrypted.length(); i++) {
            char currChar = encrypted.charAt(i);
            int idx = alphabet.indexOf(currChar);
            int id = smallalpha.indexOf(currChar);
            
            if (idx != -1) {
                char newChar = shiftedalphabet.charAt(idx);

                encrypted.setCharAt(i, newChar);
            }
            else if(id != -1) {
                char newChar = sftdalpha.charAt(id);

                encrypted.setCharAt(i, newChar);
            }
        }
        return encrypted.toString();
    }
    
    public void testCaser() {
        String message = "Subham is a cool boy!";
        int key = 1;
        String encrypted = encrypt(message, key);
        System.out.println("key is " + key + "\n" + encrypted + "\n" + "message is "+ message);
    }
    
    public static void main(String[] args) {
        CaesarCipher cipher = new CaesarCipher();

        cipher.testCaser();
    }
}