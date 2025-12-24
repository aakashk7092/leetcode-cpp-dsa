class Solution {
    vector<int> generateRow(int rowNum) {
        vector<int> row(rowNum);
        row[0] = 1;
        long long val = 1;

        for (int col = 1; col < rowNum; ++col) {
            val = val * (rowNum - col) / col;
            row[col] = val;
        }

        return row;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int i = 1; i <= numRows; ++i) {
            triangle.push_back(generateRow(i));
        }
        return triangle;
    }
};
