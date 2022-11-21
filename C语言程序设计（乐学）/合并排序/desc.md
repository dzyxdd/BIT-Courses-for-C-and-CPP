# 合并排序

## 题目描述

要求，将两个已经排好顺序的字符串合并到一个字符串里

main函数和函数的定义已经写好了，你只能使用指针来完成了。

### 预设代码

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int merge_sort(char *a,char *b,char *c); 
int main(int argc, char *argv[]) {
		
	char a[100];
        char b[100];
        char c[200];

	gets(a);
        gets(b);
       merge_sort(a,b,c);
	puts(c);
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```



## 样例

### 样例1

#### Input

```
1a
2b
```

#### Output

```
12ab
```

### 样例2

#### Input

```
eggloo
aceehrt
```

#### Output

```
aceeegghloort
```
