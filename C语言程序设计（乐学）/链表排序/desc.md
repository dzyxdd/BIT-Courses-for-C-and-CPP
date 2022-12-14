# 链表排序

## 题目描述

对于输入的 n 个数据 num 进行排序，要求将输入的数据按 num 升序建立带有表头结点的链表，且链表中不能有重复的数据。

　　现在已经给出结点定义和程序框架，包括 main 函数和链表输出函数 outlist，请编写函数 sortlist 完成链表排序功能。

函数原型 sortlist( PNODE h, int num ) 的参数含义如下： 
    h ：单链表的头指针
   num ：新输入的需要插入链表中的数据

### 预设代码：

```c
/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include "stdio.h"
#include "stdlib.h"

struct node
{	int data;
	struct node * next;
} ;

typedef struct node NODE;
typedef struct node * PNODE;
void outlist( PNODE );

int main ( )
{   int num=1;
	PNODE head;

	head = (PNODE)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	while ( num!=0 )
	{  	scanf("%d", &num);
		if ( num!=0 )
			sortlist( head, num);
	}
	outlist( head );
	return 0;
}

void outlist( PNODE head )
{	PNODE p;
	p = head->next;
	while ( p != NULL )
	{	printf("%d\n", p->data);
		p = p->next;
	}
}

/* This is an example for list. Please programme your code like it.
sortlist( PNODE h, int num )
{	PNODE p;
	p = (PNODE)malloc( sizeof(NODE) );
	p->data = num;
	p->next = h->next;
	h->next = p;
}
*/

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
```



## 样例

### 样例1

#### Input

```
100 200 300 100 200 300 400 500 600 0
```

#### Output

```
100
200
300
400
500
600
```

### 样例2

#### Input

```
600 500 400 0
```

#### Output

```
400
500
600
```

### 样例3

#### Input

```
100 100 100 100 0
```

#### Output

```
100
```

### 样例4

#### Input

```
100 100 200 300 300 400 50 600 50 600 700 1000 400 1000 0
```

#### Output

```
50
100
200
300
400
600
700
1000
```

