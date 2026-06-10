//leetcode 211
//design add and search words (design browser history)

class WordDictionary {
public:

    struct trieNode{     //same as implement trie problem
        bool isEndOfWord;
        trieNode* children[26];
    };

    trieNode* getNode(){
        trieNode* newNode = new trieNode();
        newNode->isEndOfWord = false;
        for(int i=0; i<26; i++){
            newNode->children[i] = NULL;
        }
        return newNode;

    }
    trieNode* root;
    
    WordDictionary() {
        root = getNode();
    }
    
    void addWord(string word) {
        trieNode* crawler = root;    //same as insert
        for(int i=0; i<word.length(); i++){
            char ch= word[i];
            int idx = ch - 'a'; 
            if(crawler->children[idx] == NULL){
                crawler->children[idx] = getNode();  //a
            } 
            crawler = crawler->children[idx];
        }
        crawler->isEndOfWord = true;
    }
    bool searchUtil(trieNode* root, string word){
        trieNode* crawler = root;
        for(int i=0; i<word.length(); i++){
            char ch= word[i];
            if(ch == '.'){
                for(int j=0; j<26; j++){
                    if(crawler->children[j] != NULL){  //'a' 'b'
                       if(searchUtil(crawler->children[j], word.substr(i+1)) == true){
                        return true;
                       }
                    } 
                }
                return false;
            } else if(crawler->children[ch - 'a'] == NULL){
                return false;
            }
            crawler = crawler->children[ch - 'a'];

            } 
            return (crawler != NULL && crawler->isEndOfWord == true);
            
    }
    
    bool search(string word) {
        return searchUtil(root, word); 
    }
};

