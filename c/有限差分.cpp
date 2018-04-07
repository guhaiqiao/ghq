// 偏微分方程
// 有限差分法
// 考虑长方形？？？
void pianweifen(){
    int n, m;
    double lx, ly;
    double dx = lx / n, dy = ly / m;
    double v[n][m];
    double dv_dx[n][m], dv_dy[n][m];             //一阶偏微分
    double d2v_dx2[n][m], d2v_dy2[n][m];         //二阶偏微分
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++){
            dv_dx[i][j] = (v[i + 1][j] - v[i - 1][j]) / 2 * dx;
            dv_dy[i][j] = (v[i][j + 1] - v[i][j - 1]) / 2 * dy;
        }
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < n - 1; j++){
            d2v_dx2[i][j] = (dv_dx[i + 1][j] - dv_dx[i - 1][j]) / 2 * dx;
            d2v_dy2[i][j] = (dv_dy[i][j + 1] - dv_dy[i][j - 1]) / 2 * dy;
        }
}