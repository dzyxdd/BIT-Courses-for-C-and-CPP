#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int sum(char input[], int i, int scale,int flag)//计算数字的值
{
    int k,sum0=0;
    for (k = i - scale; k < i; k++)
    {
        sum0 = sum0 * 10 + (input[k] - '0');
    }
    if (flag)
        sum0 = -sum0;
    return sum0;
}
int main()
{
    char input[200]={'\0'};//一开始输入的字符数组
    scanf("%s", input);
    int i,len1,flag=0,scale=0,k=0,max=0,min=0,fact=0;
    int num[100];//存数字的值
    len1 = strlen(input);
    char c = input[len1 - 3];
    for (i = 0; i < len1; i++)
    {
        if (input[i] == '-')//考虑符号
        {
            flag = 1;
            continue;
        }
        else if (input[i] >= '0' && input[i] <= '9')
        {
            scale++;//逗号之间，每个数都让位数+1
            continue;
        }
        else if (input[i] == ',')//到达逗号，一个数结束
        {
            num[k] = sum(input, i, scale, flag);//去算值
            k++;
            flag = 0, scale = 0;//位数和符号复位
        }
        else
            break;
    }
    max = num[0], min = num[0];
    for (i = 1; i < k; i++)//求最大和最小
    {
        if (max < num[i])
            max = num[i];
        if (min > num[i])
            min = num[i];
    }
    switch (input[len1 - 3])//开始算结果
    {
        case '+':fact = max + min; break;
        case '-':fact = max - min; break;
        case '*':fact = max * min; break;
        case '/':fact = max / min; break;
        case '%':fact = max % min; break;
    }
    if (max < 0 && min < 0)
        printf("(%d) %c (%d) = %d\n", max,c, min, fact);
        /*else if (max < 0 && min >= 0)
            printf("(%d) %c %d = %d\n", max,c, min, fact);*/
    else if (max >= 0 && min < 0)
        printf("%d %c (%d) = %d\n", max,c, min, fact);
    else
        printf("%d %c %d = %d\n", max,c, min, fact);
    return 0;
}
