// 2022.9.20





/*                 本程序实现了 c = a +b

#include<stdio.h>
int main()
{
    int a, b, c;


    while (~scanf("%d%d", &a, &b));
    c = a + b;
    printf("%d\n", c);
    return 0;

}

*/


/*     输入三个数，判断输入三个数中的最大值
#include<stdio.h>

int main()

{

    int a, b, c;
    int max;

    printf("please sent three numbers : ");

    scanf("%d%d%d", &a, &b, &c);

    max = a;
    if (max < b)

    {
        max = b;

    }

    if (max < c)


    {

        max = c;

    }


    printf("最大值为：%d", max);


    return 0;
}

*/



// 要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
// 例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
// 用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。




// 方法1：

/*
#include<stdio.h>
int main()
{
    char c1,c2,c3,c4,c5;
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;
}
*/

// 方法2：




/*
#include<stdio.h>

int main()
{
    char s[11];                             //定义一个长度为10的字符串（注意有结尾符）
    gets(s);                                //输入字符串
    for (int i = 0; s[i] != '\0'; i++)      //循环到结尾符'\0'时停止循环
    {
        if (s[i] >= 'A' && s[i] <= 'Z')             //判断是否为大写字母
        {
            s[i] = (s[i] + 4 - 'A') % 26 + 'A';     //大写字母后移
        }
        if (s[i] >= 'a' && s[i] <= 'z')             //判断是否为小写字母A
        {
            s[i] = (s[i] + 4 - 'a') % 26 + 'a';     //小写字母后移
        }
    }
    puts(s);                                //输出字符串
    return 0;
}

*/



/*有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
请编程实现在第n年的时候，共有多少头母牛？*/

/*输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理*/

#include<stdio.h>

int fun(int n)   // 计算函数


{
    if (n <= 4)  // 前4项

        return n;

    else         // 4之后项


        return fun(n - 1) + fun(n - 3);


    return n;
}



int main(void)   // 不返回值

{

    int n;

    scanf("%d", &n); 

    printf("%d", fun(n));

}

