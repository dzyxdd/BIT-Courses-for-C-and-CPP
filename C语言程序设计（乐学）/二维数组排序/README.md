# 二维数组排序

## 题目描述

输入一个3*4的二维数组

对二维数组里面的每一行进行排序；

输出排序后的二维数组。

### 预设代码：

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

#define   ROW  3
#define   COL  4


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int resort(int (*pa)[COL],int row,int col);

int main(int argc, char *argv[]) {
		
    int a[ROW][COL];
//    int num;
    
    int (*pa)[COL];
    
    int i=0,j=0;
    for(i=0;i<ROW;i++)
     {
       for(j=0;j<COL;j++)	
       scanf("%d",&a[i][j]);
	 }
    pa=a;
 
	resort(a,ROW,COL);

     for(i=0;i<ROW;i++)
     {
           for(j=0;j<COL;j++)	
                  printf("%3d",a[i][j]);
           printf("\n");
     }
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```



## 样例

### 样例1

#### Input

```
12   5   6   89
56  78  66  13
89  12  6   3
```

#### Output

```
  5  6 12 89
 13 56 66 78
  3  6 12 89
```
