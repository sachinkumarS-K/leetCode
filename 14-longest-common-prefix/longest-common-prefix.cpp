class Node {
public:
    char data;
    Node* child[26];
    bool isTerminal;
    Node(char d) {
        data = d;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

void insert(Node* root, string word) {
    for (char& ch : word) {
        int i = ch - 'a';
        if (root->child[i] == nullptr)
            root->child[i] = new Node(ch);

        root = root->child[i];
    }
    root->isTerminal = true;
}

void findPrefix(Node* root, string& str) {
    int c = 0;
    int next;
    for (int i = 0; i < 26; i++) {
        if (root->child[i] != nullptr) {
            c++;
            next = i;
        }
    }
    if (c > 1 || root->isTerminal) {
        return ;
    }
    str += (char)(next + 'a');

    findPrefix(root->child[next], str);
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Node* root = new Node('\0');
        if (strs.empty())
            return "";

         for (string& word : strs) insert(root, word);

        string ans = "";
        findPrefix(root, ans);
        return ans;
    }
};