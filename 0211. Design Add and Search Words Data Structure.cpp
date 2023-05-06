class TrieNode{
public:
    vector<TrieNode*> childeren;
    bool is_end;
    TrieNode(){
        childeren = vector<TrieNode*>(26,nullptr);
        is_end = false;
    }
};

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr = root;
        for(char c:word){
            if(curr->childeren[c-'a'] == nullptr) curr->childeren[c-'a'] = new TrieNode();
            curr = curr->childeren[c-'a'];
        }
        curr->is_end = true;
    }

    bool searchHelper(string word, int i, TrieNode* curr){
        if(i==word.size()) return curr->is_end;
        if(word[i]!='.'){
            if(curr->childeren[word[i]-'a'] == nullptr) return false;
            return searchHelper(word,i+1,curr->childeren[word[i]-'a']);
        }
        else{
            for(TrieNode* child: curr->childeren){
                if(child!=nullptr && searchHelper(word,i+1,child)) return true;
            }
            return false;
        }
    }
    
    bool search(string word) {
        return searchHelper(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
