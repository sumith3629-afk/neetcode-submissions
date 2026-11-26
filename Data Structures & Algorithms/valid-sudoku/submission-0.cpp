class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<char> rows[9];
        std::unordered_set<char> columns[9];
        std::unordered_set<int> box[9];
    for ( int i = 0; i < 9 ; ++i){
        for(int j = 0 ; j < 9 ; ++j){
            char digit = board[i][j];
            if(digit == '.'){
                continue;
            }
            int boxindex = (i / 3) * 3 + (j / 3);
            if(rows[i].count(digit)){
                return false;
            }
            if(columns[j].count(digit)){
                return false;
            }
            if(box[boxindex].count(digit)){
                return false;
            }
            rows[i].insert(digit);
            columns[j].insert(digit);
            box[boxindex].insert(digit);
        
        }
    }
        
    return true;
    }
};




















































































































































