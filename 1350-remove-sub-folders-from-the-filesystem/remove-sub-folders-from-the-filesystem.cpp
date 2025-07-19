class TrieNode {
public:
    char data;
    unordered_map<string, TrieNode*> children;
    bool isTerminal;
    TrieNode(char d) {
        data = d;
        isTerminal = false;
    }
    void insert(TrieNode* root, string dir) {
         vector<string> parts = split(dir);
        for (auto ch : parts) {
            if (root->isTerminal) return;
            if (root->children.find(ch) == root->children.end()) {
                root->children[ch] = new TrieNode(ch[0]);
            }
            root = root->children[ch];
        }
        root->isTerminal = true;

    }
    void traverse(TrieNode* root, vector<string>& ans, string word) {
        if (root->isTerminal) {
            ans.push_back(word);
            return;
        }
        for (auto it : root->children) {
            traverse(it.second, ans, word +"/"+ it.first);
        }
    }
    vector<string> split(string& path) {
        vector<string> res;
        string temp;
        for (int i = 1; i < path.size(); ++i) {
            if (path[i] == '/') {
                if (!temp.empty()) {
                    res.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += path[i];
            }
        }
        if (!temp.empty())
            res.push_back(temp);
        return res;
    }
};

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans;

        TrieNode* root = new TrieNode('\0');
        for (auto str : folder)
            root->insert(root, str);

        root->traverse(root, ans, "");

        return ans;
    }
};