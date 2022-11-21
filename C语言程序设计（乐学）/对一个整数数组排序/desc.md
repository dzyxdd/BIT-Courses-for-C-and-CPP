# 对一个整数数组排序

## 题目描述

输入一个整数m，然后m个整数，构成一个数组

用一个指针数组分别指向这个数组的每一个元素

要求在不改变原始数组的顺序的情况下，对指针数组进行排序，将排序后的指针数组输出出来。

### 预设代码

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int resort(int *pa[],int num);

int main(int argc, char *argv[]) {
		
    int a[100];
    int num;
    
    int *pa[100];
    scanf("%d",&num);
    
    int i=0;
    for(i=0;i<num;i++)
     {
       scanf("%d",&a[i]);
       pa[i]=&a[i];     	
	 }

	resort(pa,num);

    for(i=0;i<num;i++)
     {
       printf("%d\n",*pa[i]);
    }




	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```



## 样例

### 样例1

#### Input

```
5
23   12  -7   6   89
```

#### Output

```
-7
6
12
23
89
```

### 样例2

#### Input

```
6
12 7 56 78 9 34
```

#### Output

```
7
9
12
34
56
78
```
