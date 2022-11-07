# 【数列】等值数列段

## 题目描述

如果一个数列中的某一段（至少有两个元素）的各元素值均相同，则称之为等值数列段。等值数列段中元素的个数叫做等值数列段的长度。

**输入：
**    由N个元素组成的整数数列A（其中N<=50)

**输出：
**    A中长度最大的所有等值数列段的始末位置，如果没有等值数列段，则输出No equal number list.

**说明：
**     始末位置是指数组下标，即0表示第一个元素。
     如果有多个同等长度的等值数列，只输出第一个等值数列的起始位置。即：当在一个LIST中出现两个等长的连续串时，答案应该是第一个等长串。

## 样例

### 样例1

#### Input

```
5
1 2 3 4 5
```

#### Output

```
No equal number list.
```

### 样例2

#### Input

```
6
1 0 1 1 1 0
```

#### Output

```
The longest equal number list is from 2 to 4.
```

### 样例3

#### Input

```
10
1 1 1 0 1 1 1 1 1 1
```

#### Output

```
The longest equal number list is from 4 to 9.
```

### 样例4

#### Input

```
10
1 4 4 4 5 6 6 6 5 6
```

#### Output

```
The longest equal number list is from 1 to 3.
```

