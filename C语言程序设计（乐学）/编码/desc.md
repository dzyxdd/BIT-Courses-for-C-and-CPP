# 编码

## 题目描述

为了最大程度地节约存储空间，经常需要把信息进行编码。一种很有效的编码方法是用数字来表示一串字符。假设这些字符串都是由不重复的英文小写字母组成的，且每个字符串中的英文字母都是从小到大排列的。

这个编码系统按照如下的方式工作：

- 字符串是按照长度从小到大的顺序排列的
- 长度相同的字符串，是按照字典需排列的

则根据这个编码系统，所有的字符串从 a 开始可以编码如下：

```
a - 1 b - 2 ... z - 26 ab - 27 ... az - 51 bc - 52 ... vwxyz - 83681 ...
```

那么，请编程计算出一个字符串在这个编码系统下编码后的值是多少。

### 输入

输入的第一行为 N，表示有 N 组数据。后面的 N 行每行包含一个不超过 10 个字母的字符串。

### 输出

输出字符串所对应的编码，如果该字符串不能被编码，则输出 0。

## 样例

### 样例1

#### Input

```
1
bf
```

#### Output

```
55
```

### 样例2

#### Input

```
1
acegiklmno
```

#### Output

```
6613700
```

### 样例3

#### Input

```
1
bca
```

#### Output

```
0
```

