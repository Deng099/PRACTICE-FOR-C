#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a ;

    //要输入多少个数据
    int num ;
    scanf ("%d" , num ) ;
    // malloc 使用要点：
    // 1. 计算所需内存大小：元素个数 × 每个元素的大小
    // 2. 返回 void*，需要强制转换为具体类型指针
    // 3. 分配的内存包含垃圾值，需要初始化
    a = (int *)malloc(num * sizeof (int) ) ;
    
    // 重要：检查内存分配是否成功
    if (a == NULL) {
        printf("内存分配失败！\n");
        return 1;  // 异常退出
    }
    
    // malloc分配的内存包含垃圾值，需要初始化
    // 方法1：手动初始化
    for (int i = 0; i < num; i++) {
        a[i] = 0;  // 全部初始化为0
    }
    
    // 方法2：使用calloc（自动初始化为0）
    // int *b = calloc(num, sizeof(int));  // 等价于 malloc + 初始化
    /*
    保持一致性

// 传统写法：
double *arr = calloc(count, sizeof(double));  

// 推荐写法：
double *arr = calloc(count, sizeof(*arr));    // 自动推导为sizeof(double)
sizeof(*arr)在编译时计算，*arr表示"arr指向的类型"，所以：

如果 int *arr，那么 sizeof(*arr) = sizeof(int)
如果 struct Node *arr，那么 sizeof(*arr) = sizeof(struct Node)*/


/*二维数组
int **matrix = calloc(rows, sizeof(int *));  // 第一维：指针数组
// 分配的是 rows 个 int* 类型的空间

for (int i = 0; i < rows; i++) {
    // 第二维：实际的int数组
    matrix[i] = calloc(cols, sizeof(int));  // 每个元素是int
    // 或者更安全：matrix[i] = calloc(cols, sizeof(**matrix));
}
*/

    int count ;
    for ( count = 0 ; count < num ; count ++ )
    {
        scanf ("%d" , & a[count] ) ;   //这里把指针a直接当数组用。[]表示偏移量
        
        // 1. 函数形参中：int arr[] 退化成 int *arr. 但以下情况不会退化：
        /*
        sizeof(arr);     // 返回整个数组大小
        &arr; */
        // 2. 其他情况：a[i] 是 *(a + i)，是第i个元素的值
      

        scanf ("%d" , a + count ) ;  //上下两行完全等效  
    }


    // 使用完毕后释放内存
    free(a);  // 释放动态分配的内存
    a = NULL; // 好习惯：释放后将指针置为NULL
    
    return 0;
}