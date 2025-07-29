class Solution {
public:
    unordered_map<string, string> shortToLong;
    string str = "xyz";
    int id = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = str + to_string(id++);
        shortToLong[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortToLong[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));