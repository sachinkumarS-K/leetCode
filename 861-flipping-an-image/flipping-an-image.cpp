class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0 ; i<image.size() ; i++){
            for(int j = 0 ; j<image[0].size() ; j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        for(int i = 0 ; i<image.size() ; i++){
            int l = 0 , h = image[0].size()-1;
            while(l<h){
                swap(image[i][l] , image[i][h]);
                l++,h--;
            }
        }
        return image;
    }
};