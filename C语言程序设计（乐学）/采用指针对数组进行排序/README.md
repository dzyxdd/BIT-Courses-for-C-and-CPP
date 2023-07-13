# 采用指针对数组进行排序

## 题目描述

要求你使用指针，对一个输入的字符串数组进行排序，输出排序结果。

为了防止你回避指针，我们已经将函数声明和主函数都写好了，这样，你就不得不用指针才能完成任务了



例子很简单，就不给了

看测例吧！

### 预设代码

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char *resort(char *a); 
int main(int argc, char *argv[]) {
		
	char a[100];
	gets(a);
	puts(resort(a));
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```



## 样例

### 样例1

#### Input

```
321
```

#### Output

```
123
```

### 样例2

#### Input

```
12687642
```

#### Output

```
12246678
```

### 样例3

#### Input

```
hello world!
```

#### Output

```
 !dehllloorw
```
