class node {
public:
    int count;
    char ch;

    node(int c, char x) {
        count = c;
        ch = x;
    }
};
class compare {
public:
    bool operator()(node* a, node* b) { return a->count < b->count; }
};
class Solution {
public:
    string reorganizeString(string s) {
        string res = "";

        unordered_map<char, int> freq;
        for (char ch : s)
            freq[ch]++;

        priority_queue<node*, vector<node*>, compare> maxHeap;

        for (auto i : freq) {
            maxHeap.push(new node(i.second, i.first));
        }

        while (maxHeap.size() > 1) {

            node* first = maxHeap.top();
            maxHeap.pop();
            node* second = maxHeap.top();
            maxHeap.pop();

            res += first->ch;
            res += second->ch;

            if (--first->count > 0)
                maxHeap.push(new node(first->count, first->ch));

            if (--second->count > 0)
                maxHeap.push(new node(second->count, second->ch));
        }
        if (!maxHeap.empty()) {
            node* last = maxHeap.top();
            if (last->count > 1)
                return "";
            res += last->ch;
        }

        return res;
    }
};