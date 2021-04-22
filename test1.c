#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
int main(void)
{

char buf[2]={'a','b'};
char * p = buf + 2;
*p = 1;
printf("&i is:%d\n",p);
printf("&buf[0] is:%p\n",&buf[0]);
printf("&buf[1] is:%p\n",&buf[1]);

strcpy(buf,"xyz");

printf("buf[0] is:%c\n",buf[0]);
printf("buf[1] is:%c\n",buf[1]);
printf("i is:%d\n",*p);
return 0;
}

/*
strcpy(buf,"xy");  最后一字符中\0,把i中的1给覆盖了,所以就成0了
strcpy(buf,"xyz"); 最后两个字符z\0,把i中的1给覆盖了, z的ascii码为122,所就是变成122了
*/
