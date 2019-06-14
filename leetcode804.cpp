class leetcode804{
    public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morseCode ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morseWords;
        
        for(auto &word: words)
        {
            string morseWord = "";
            for(auto &letter: word)
            {
                morseWord += morseCode[((int)letter)-97]; 
            }
            morseWords.insert(morseWord);
        }   

        return morseWords.size();
    }
};
/** 
 * int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> gen_codes;
    
    for(auto word : words) {
        string code = "";
        for(auto ch : word)
            code += morse_code[ch - 'a'];
        gen_codes.insert(code);
    }
    
    return gen_codes.size();
}**/