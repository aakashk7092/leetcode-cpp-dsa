class Solution {
public:
    void DFS(vector<vector<int>>& image, int i, int j, int newColor, int originalColor) {
        int m = image.size();
        int n = image[0].size();

        if (i < 0 || j < 0 || i >= m || j >= n || image[i][j] != originalColor)
            return;

        image[i][j] = newColor;

        DFS(image, i - 1, j, newColor, originalColor);
        DFS(image, i + 1, j, newColor, originalColor);
        DFS(image, i, j - 1, newColor, originalColor);
        DFS(image, i, j + 1, newColor, originalColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;

        DFS(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};
