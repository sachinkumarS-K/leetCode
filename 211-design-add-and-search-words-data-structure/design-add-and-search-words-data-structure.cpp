class Node {
public:
    char data;
    unordered_map<char, Node*> child;
    bool isTerminal;

    Node(char d) {
        data = d;
        isTerminal = false;
    }
};
class WordDictionary {
private:
    Node* root;
    void insert(Node* root, string word , int idx) {
        if (word.size() == idx) {
            root->isTerminal = true;
            return;
        }
        if (root->child.find(word[idx]) == root->child.end())
            root->child[word[idx]] = new Node(word[idx]);
        root = root->child[word[idx]];

        insert(root, word , idx+1);
    }
    bool search(Node* root, string word) {
        if (word.size() == 0)
             return root->isTerminal;

        if (word[0] == '.') {
            for (auto& pair : root->child) {
                if (search(pair.second, word.substr(1)))
                    return true;
            }
            return false;
        }

        if (root->child.find(word[0]) != root->child.end())
            return search(root->child[word[0]], word.substr(1));
        else
            return false;
    }

public:
    WordDictionary() { root = new Node('\0'); }

    void addWord(string word) { insert(root, word , 0); }

    bool search(string word) { return search(root, word); }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */