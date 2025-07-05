class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d) {
        data = d;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};
class Trie {
private:
    TrieNode* root;
    void insert(TrieNode* root, string word) {
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }
        int idx = word[0] - 'a';
        if (root->children[idx] == nullptr)
            root->children[idx] = new TrieNode(word[0]);
        root = root->children[idx];
        insert(root, word.substr(1));
    }
    bool search(TrieNode* root, string word) {
        if (word.size() == 0) {
            return root->isTerminal;
        }
        int idx = word[0] - 'a';
        if (root->children[idx] != nullptr) {
            return search(root->children[idx], word.substr(1));
        } else {
            return false;
        }
    }
    bool check(TrieNode* root, string word) {
        if (word.size() == 0)
            return true;

        int idx = word[0] - 'a';
        if (root->children[idx] != nullptr) {
            return check(root->children[idx], word.substr(1));
        } else {
            return false;
        }
    }

public:
    Trie() { root = new TrieNode('\0'); }

    void insert(string word) {
        TrieNode* temp = root;
        insert(temp, word);
    }

    bool search(string word) { return search(root, word); }

    bool startsWith(string prefix) { return check(root, prefix); }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */