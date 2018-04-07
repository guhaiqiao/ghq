// 一、数据结构：相互之间存在一种或多种特殊关系的数据元素的集合
//    数据元素：数据的基本单位
//    数据项：组成数据元素的具有独立含义的最小单位
//    数据结构三元素：逻辑结构、存储结构、数据的运算
//    逻辑结构：集合结构、线性结构（队列、栈）、树形结构、图形结构
//    存储结构：顺序、链式、索引、散列
// 二、插入排序
void insertSort(int data[],int n){
    int j;
    for (int i = 1; i < n; i++){
        int temp = data[i];
        for (j = i - 1; j >= 0 && data[j] > temp; j--)
            data[j + 1] = data[j];
        data[j + 1] = temp;
    }
}
//三、 复杂度 一般取对数看
//   O(1)<O(log n)<O(sqrt(n))<O(n)<O(n*log n)<O(n*n)<O(n*n*n)<O(2^n)<O(n!)
//   渐进下界、渐进紧界
//   时间复杂度是空间复杂度的上界
// 四、递归与分治
//   递归复杂度取决于递归实例调用个数
int sum(int a[],int n){              //递归
    return n < 1 ? 0 : sum(a, n - 1) + a[n - 1];
}//复杂度为O(n)
// 复杂度递推方程：T(n) = T(n - 1) + O(1);
            //    T(0) = O(1);
int sum(int a[], int lo, int hi){     //分治
    int mid = (lo + hi) >> 1;
    if (lo == hi)
        return a[lo];
    else
        return sum(a, lo, mid) + sum(a, mid, hi);
}