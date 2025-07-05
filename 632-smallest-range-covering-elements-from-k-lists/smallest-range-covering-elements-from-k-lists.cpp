class Node {
public:
    int data;
    int row;
    int col;
    Node(int d, int r, int c) {
        data = d;
        row = r;
        col = c;
    }
};
class compare {
public:
    bool operator()(Node* a, Node* b) { return a->data > b->data; }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& arr) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        priority_queue<Node*, vector<Node*>, compare> minHeap;

        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i][0]);
            mini = min(mini, arr[i][0]);
            minHeap.push(new Node(arr[i][0], i, 0));
        }
        int start = mini, end = maxi;
        while (!minHeap.empty()) {
            Node* top = minHeap.top();
            minHeap.pop();
            mini = top->data;
            if ((maxi - mini) < (end - start)) {
                start = mini;
                end = maxi;
            }
            if (top->col + 1 < arr[top->row].size()) {
                maxi = max(maxi, arr[top->row][top->col + 1]);
                Node* newNode = new Node(arr[top->row][top->col + 1], top->row,
                                         top->col + 1);
                minHeap.push(newNode);
            } else {
                break;
            }
        }
        return {start, end};
    }
};