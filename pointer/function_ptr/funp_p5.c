/*练习5：排序回调函数（进阶）
实现一个通用的排序函数，使用函数指针作为比较回调。*/

#include <stdio.h>
#include <stdlib.h>

// 比较函数类型定义
typedef int (*CompareFunc)(int, int);

// 需要你完成的冒泡排序函数
void bubbleSort(int arr[], int size, CompareFunc compare) {
    // 你的代码：实现冒泡排序算法
    // 使用compare函数来比较元素
    // 如果compare(a, b)返回正数，表示a应该在b后面

    int i , j ; 
    for ( i = size - 1 ; i > 0 ; i -- )
    {
        for ( j = 0 ; j < i ; j ++ )
        {
            int swapped = 0; // 优化冒泡排序：如果本轮没有交换，说明已经有序
            if ( compare( arr[j] , arr[j+1] ) > 0 )
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                swapped = 1;
            }
            if (!swapped) break; // 提前终止
        }
    }
}

// 比较函数1：升序
int ascending(int a, int b) {
    // 你的代码：如果a > b返回正数，a < b返回负数，相等返回0
    return a - b ; //不用if else，只要是正数就可以！
}

// 比较函数2：降序  
int descending(int a, int b) {
    // 你的代码：如果a < b返回正数，a > b返回负数，相等返回0
    return b - a ;

}

// 比较函数3：按绝对值升序
int absoluteAscending(int a, int b) {
    // 你的代码：比较a和b的绝对值
    int c = abs (a) ;
    int d = abs (b) ;
    return c - d ;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {5, -2, 8, -1, 3, -7, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("原数组: ");
    printArray(numbers, size);
    
    // 测试不同的排序方式
    // 注意创建数组副本！！避免修改原数组
    int arr1[100], arr2[100], arr3[100];
    for (int i = 0; i < size; i++) 
    {
        arr1[i] = arr2[i] = arr3[i] = numbers[i];
    }
    
    printf("升序排序: ");
    bubbleSort(arr1, size, ascending);
    printArray(arr1, size);
    
    printf("降序排序: ");
    bubbleSort(arr2, size, descending);
    printArray(arr2, size);
    
    printf("按绝对值升序: ");
    bubbleSort(arr3, size, absoluteAscending);
    printArray(arr3, size);
    
    // 你的代码：调用bubbleSort按绝对值排序并打印
    
    return 0;
}