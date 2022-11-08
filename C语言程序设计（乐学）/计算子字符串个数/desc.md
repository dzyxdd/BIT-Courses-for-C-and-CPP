# 计算子字符串个数

## 题目描述

字符串匹配问题：输入一个字符串，计算其中包含的连续给定的子字符串的个数。

例如输入字符串" EF**ABCABCABC**DABCDD ” , 给定子字符串" ABC” ，输出是 3。

函数原型：`int countsub( char *str, char *subs )`。

参数说明： str 保存输入的字符串的首地址， subs 保存需要统计的子字符串的首地址。

返回值：包含的连续子字符串的个数。

### 预设代码

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

int countsub( char *str, char *ss );

main( )
{
    char s1[1000] = {0}, s2[100] = {0};
    gets(s1);
    gets(s2);
    printf("%d\n", countsub( s1, s2 ) );
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```

## 样例

### 样例1

#### Input

```
EFABCABCABCDABCDD
ABC
```

#### Output

```
3
```

### 样例2

#### Input

```
abcdefghi
xyz
```

#### Output

```
0
```

