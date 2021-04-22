#include "malloc.h"
#include "string.h"
#include "stdio.h"
void main()
{

char *large_str = (char *)malloc(sizeof(char)*1024);
char *str = (char *)malloc(sizeof(char)*4);
char *important = (char *)malloc(sizeof(char)*6);
strcpy(important,"abcdef");//给important赋初值

//下面两行代码是为了看str和important的地址
printf("%d\n",str);
printf("%d\n",important);

gets(large_str);//输入一个字符串
strcpy(str, large_str);//代码本意是将输入的字符串拷贝到str
printf("%s\n",important);
}

// input string is "12345678901234567890123456789012hacker"
/*
缓存溢出（Buffer overflow），是指在存在缓存溢出安全漏洞的计算机中，攻击者可以用超出常规长度的字符数来填满一个域，通常是内存区地址。在某些情况下，这些过量的字符能够作为“可执行”代码来运行。从而使得攻击者可以不受安全措施的约束来控制被攻击的计算机。
*/
