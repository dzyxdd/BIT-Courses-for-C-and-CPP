# 猜猜我是谁

## 题目描述

在指定的文本文件中包含了我需要的信息，请从指定文件中读取指定的行。如果文件中没有指定的行，则显示“Line No Error.”。如果文件不存在，则显示“File Name Error.”。

**输入**：
第一行为要以只读方式打开的文本文件名
第二行要读取的行号（从1开始）

**输出**：
文件中指定行号的内容（完整一行的内容）

## 样例

### 样例1

#### Input

```
data1.txt
2
```

#### Output

```
Mary
```

### 样例2

#### Input

```
data1.txt
10
```

#### Output

```
Line No Error.
```

### 样例3

#### Input

```
data.txt
2
```

#### Output

```
File Name Error.
```

